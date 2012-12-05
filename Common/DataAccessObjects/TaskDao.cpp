#include "TaskDao.h"

#include "../ModelGenerator.h"

QList<Task*> *TaskDao::getTasks(MySQLHandler *db, int id, int org_id, QString title, QString imp,
                            QString ref_page, int wc, int s_lang_id, int t_lang_id, QString time,
                            int s_reg_id, int t_reg_id)
{
    QList<Task*> *ret = new QList<Task*>();
    QString args = "";

    if(id != -1) {
        args += QString::number(id) + ", ";
    } else {
        args += "null, ";
    }

    if(org_id != -1) {
        args += QString::number(org_id) + ", ";
    } else {
        args += "null, ";
    }

    if(title != "") {
        args += title + ", ";
    } else {
        args += "null, ";
    }

    if(imp != "") {
        args += imp + ", ";
    } else {
        args += "null, ";
    }

    if(ref_page != "") {
        args += ref_page + ", ";
    } else {
        args += "null, ";
    }

    if(wc != -1) {
        args += QString::number(wc) + ", ";
    } else {
        args += "null, ";
    }

    if(s_lang_id != -1) {
        args += QString::number(s_lang_id) + ", ";
    } else {
        args += "null, ";
    }

    if(t_lang_id != -1) {
        args += QString::number(t_lang_id) + ", ";
    } else {
        args += "null, ";
    }

    if(time != "") {
        args += time + ", ";
    } else {
        args += "null, ";
    }

    if(s_reg_id != -1) {
        args += QString::number(s_reg_id) + ", ";
    } else {
        args += "null, ";
    }

    if(t_reg_id != -1) {
        args += QString::number(t_reg_id);
    } else {
        args += "null";
    }

    QSqlQuery *mQuery = db->call("getTask", args);
    if(mQuery->first()) {
        do {
            Task *task = ModelGenerator::GenerateTask(mQuery);
            ret->append(task);
        } while(mQuery->next());
    }

    delete mQuery;

    return ret;
}

Task *TaskDao::getTask(MySQLHandler *db, int id, int org_id,
                   QString title, QString imp, QString ref_page,
                   int wc, int s_lang_id, int t_lang_id,
                   QString time, int s_reg_id, int t_reg_id)
{
    Task *task;
    QList<Task*> *task_list = TaskDao::getTasks(db, id, org_id, title, imp, ref_page, wc,
                          s_lang_id, t_lang_id, time, s_reg_id, t_reg_id);
    if(task_list->count() > 0) {
        task = task_list->at(0);
    }
    return task;
}

QList<Task *> *TaskDao::getActiveTasks(MySQLHandler *db, int limit)
{
    QList<Task *> *ret = new QList<Task *>();
    QString args = "null";
    if(limit > 0) {
        args = QString::number(limit);
    }

    QSqlQuery *mQuery = db->call("getLatestAvailableTasks", args);
    if(mQuery->first()) {
        do {
            Task *task = TaskDao::getTask(db, MySQLHandler::getValueFromQuery("id", mQuery).toInt());
            ret->append(task);
        } while(mQuery->next());
    }

    return ret;
}


QList<ArchivedTask *> *TaskDao::getArchivedTasks(MySQLHandler *db, int arc_id, int t_id, int o_id)
{
    QList<ArchivedTask *> *ret = new QList<ArchivedTask *>();
    QString args = "";

    if(arc_id != -1) {
        args += QString::number(arc_id) + ", ";
    } else {
        args += "null, ";
    }

    if(t_id != -1) {
        args += QString::number(t_id) + ", ";
    } else {
        args += "null, ";
    }

    if(o_id != -1) {
        args += QString::number(o_id) ;
    } else {
        args += "null";
    }

    QSqlQuery *mQuery = db->call("getArchivedTasks", args);
    if(mQuery->first()) {
        do {
            ArchivedTask *task = ModelGenerator::GenerateArchivedTask(mQuery);
            ret->append(task);
        } while(mQuery->next());
    }

    return ret;
}

ArchivedTask *TaskDao::getArchivedTask(MySQLHandler *db, int arc_id, int t_id, int o_id)
{
    ArchivedTask *task = NULL;
    QList<ArchivedTask*> *arc_tasks = TaskDao::getArchivedTasks(db, arc_id, t_id, o_id);
    if(arc_tasks->count() > 0) {
        task = arc_tasks->at(0);
    }
    return task;
}
