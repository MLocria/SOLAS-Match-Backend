#ifndef CALCULATETASKSCOREJOB_H
#define CALCULATETASKSCOREJOB_H

#include <QObject>
#include <AMQPcpp.h>
#include <QList>

#include "PluginHandler/JobInterface.h"
#include "Common/MySQLHandler.h"
#include "Common/Models/Task.h"

class CalculateTaskScore : public QObject, public JobInterface
{
    Q_INTERFACES(JobInterface)

public:
    CalculateTaskScore(AMQPMessage *);
    void run();

private:
    QList<Task> *getTasks();
    int getTaskIdFromMessage();
    int getCurrentScore(int user_id, int task_id);
    void saveUserTaskScore(int user_id, int task_id, int score);
    AMQPMessage *message;
    MySQLHandler *db;

};

#endif // CALCULATETASKSCOREJOB_H
