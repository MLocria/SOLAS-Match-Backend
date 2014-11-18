#include "ProjectImageApprovedEmailGenerator.h"
using namespace  SolasMatch::Common::Protobufs::Emails;

ProjectImageApprovedEmailGenerator::ProjectImageApprovedEmailGenerator()
{
}

void ProjectImageApprovedEmailGenerator::run()
{
    qDebug() << "EmailGenerator: Generating Project Image Approved Email";
    ProjectImageApprovedEmail email_message;
    email_message.ParseFromString(this->protoBody.toStdString());

    ConfigParser settings;
    QSharedPointer<MySQLHandler> db = MySQLHandler::getInstance();
    QSharedPointer<Email> email = QSharedPointer<Email>(new Email());
    QSharedPointer<Project> project = ProjectDao::getProject(db, email_message.project_id());
    QSharedPointer<User> user = QSharedPointer<User>();
    user = UserDao::getUser(db, email_message.user_id());
    QSharedPointer<Organisation> org = QSharedPointer<Organisation>();
    QString error = "";

    if (project.isNull()) {
        error = "Project image approved email generation failed. Unable to find  project with id " +
                QString::number(email_message.project_id());
    } else {
        org = OrganisationDao::getOrg(db, project->organisationid());

        if (org.isNull()) {
            error = "Project image approved email generation failed. Unable to find org with id " +
                    QString::number(project->organisationid());
        }

        if (!project->imageuploaded()) {
            error = "Project image approved email generation failed. Invalid project image upload status :" +
                    QString::number(project->imageuploaded());
        }
    }

    if (user.isNull()) {
        error = "Project image approved email generation failed.: Unable to find relevant ";
        error += "data in the Database. Searched for User ID (org admin)";
        error += QString::number(email_message.user_id()) + ".";
    }

    if (error.compare("") == 0) {
        QString siteLocation = settings.get("site.url");
        QString siteName = settings.get("site.name");

        ctemplate::TemplateDictionary dict("projectImageApproved");
        dict.SetValue("SITE_NAME", siteName.toStdString());
        QString projectView = siteLocation + "project/" + QString::number(project->id()) + "/view/";
        dict.SetValue("PROJECT_VIEW", projectView.toStdString());
        dict.SetValue("PROJECT_TITLE", project->title());

        if(user->display_name() != "") {
            dict.ShowSection("USER_HAS_NAME");
            dict.SetValue("USERNAME", user->display_name());
        } else {
            dict.ShowSection("NO_USER_NAME");
        }


        bool footer_enabled=(QString::compare("y", settings.get("email-footer.enabled")) == 0);
        if (footer_enabled)
        {
            QString donate_link = settings.get("email-footer.donate_link");
            ctemplate::TemplateDictionary* footer_dict = dict.AddIncludeDictionary("FOOTER");
            QString footer_location = QString(TEMPLATE_DIRECTORY) + "emails/footer.tpl";
            footer_dict -> SetValue("DONATE_LINK",donate_link.toStdString());
            footer_dict -> SetFilename(footer_location.toStdString());
        }

        std::string email_body;
        QString template_location = QString(TEMPLATE_DIRECTORY) + "emails/project-image-approved.tpl";
        ctemplate::ExpandTemplate(template_location.toStdString(), ctemplate::DO_NOT_STRIP, &dict, &email_body);
        const char* projectTitle = project->title().c_str();


        email->setSender(settings.get("site.system_email_address"));;
        email->addRecipient(QString::fromStdString(user->email()));
        email->setSubject(settings.get("site.name") + ": Project image has been approved [Project - " + projectTitle + "]");
        email->setBody(QString::fromUtf8(email_body.c_str()));
    }	else {
        email = this->generateErrorEmail(error);
    }

    this->emailQueue->insert(email, currentMessage);
}

