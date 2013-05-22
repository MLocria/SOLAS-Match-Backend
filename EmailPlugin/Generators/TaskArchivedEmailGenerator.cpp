#include "TaskArchivedEmailGenerator.h"

TaskArchivedEmailGenerator::TaskArchivedEmailGenerator()
{
    //Default Constructor
}

void TaskArchivedEmailGenerator::run()
{
    qDebug() << "EmailGenerator - Generating TaskArchived";

    TaskArchived email_message;
    email_message.ParseFromString(this->protoBody.toStdString());

    ConfigParser settings;
    QString error = "";
    QSharedPointer<Email> email = QSharedPointer<Email>(new Email());
    QSharedPointer<User> user = QSharedPointer<User>();
    QSharedPointer<Organisation> org = QSharedPointer<Organisation>();
    QSharedPointer<ArchivedTask> task = QSharedPointer<ArchivedTask>();
    QSharedPointer<Project> project = QSharedPointer<Project>();
    QSharedPointer<MySQLHandler> db = MySQLHandler::getInstance();

    user = UserDao::getUser(db, email_message.user_id());
    task = TaskDao::getArchivedTask(db, email_message.task_id());

    if(!user.isNull() && !task.isNull()) {
        project = ProjectDao::getProject(db, task->projectid());

        if(!project.isNull()) {
            org = OrganisationDao::getOrg(db, project->organisationid());
            if(org.isNull()) {
                error = "Failed to Generate task archived email. Unable to find relevent information ";
                error += "in the Database. Unable to locate org with id " + QString::number(project->organisationid());
                error += ".";
            }
        } else {
            error = "Failed to Generate task archived email. Unable to find relevent information ";
            error += "in the Database. Searched for project ID " + QString::number(task->projectid());
        }
    } else {
        error = "Failed to Generate task archived email. Unable to find relevent information ";
        error += "in the Database. Searched for user ID " + QString::number(email_message.user_id());
        error += ", task ID " + QString::number(email_message.task_id()) + ".";
    }

    if(error.compare("") == 0) {
        ctemplate::TemplateDictionary dict("task_archived");
        if(user->display_name() != "") {
            dict.ShowSection("USER_HAS_NAME");
            dict.SetValue("USERNAME", user->display_name());
        } else {
            dict.ShowSection("NO_USER_NAME");
        }
        dict.SetValue("TASK_TITLE", task->title());
        dict.SetValue("ORG_NAME", org->name());
        dict.SetValue("SITE_NAME", settings.get("site.name").toStdString());

        std::string email_body;
        QString template_location = QString(TEMPLATE_DIRECTORY) + "emails/task-archived.tpl";
        ctemplate::ExpandTemplate(template_location.toStdString(), ctemplate::DO_NOT_STRIP, &dict, &email_body);

        email->setSender(settings.get("site.system_email_address"));
        email->addRecipient(QString::fromStdString(user->display_name()));
        email->setSubject("SOLAS Match: Task Updated");
        email->setBody(QString::fromStdString(email_body));
    } else {
        email = this->generateErrorEmail(error);
    }

    this->emailQueue->insert(email, currentMessage);
}
