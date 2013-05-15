#ifndef CALCULATEPROJECTDEADLINES_H
#define CALCULATEPROJECTDEADLINES_H

#include <QMap>
#include <QDateTime>
#include <AMQPcpp.h>
#include <QSharedPointer>

#include "PluginHandler/JobInterface.h"

#include "Common/GraphBuilder.h"
#include "Common/MySQLHandler.h"

#include "Common/protobufs/models/WorkflowGraph.pb.h"
#include "Common/protobufs/models/WorkflowNode.pb.h"
#include "Common/protobufs/models/Project.pb.h"

class CalculateProjectDeadlines : public JobInterface
{
    Q_INTERFACES(JobInterface)

public:
    CalculateProjectDeadlines();
    ~CalculateProjectDeadlines();
    void run();
    void setAMQPMessage(AMQPMessage *message);

private:
    void calculateSubGraphDeadlines(WorkflowNode node, GraphBuilder builder, QSharedPointer<Project> project,
                                    QSharedPointer<MySQLHandler> db);
    QMap<QString, int> calculateDeadlineDefaults(QMap<QString, int> deadlineDefaults, QList<QString> deadlineLengths,
                                                 QDateTime created, QDateTime deadline);
    AMQPMessage *message;

};

#endif // CALCULATEPROJECTDEADLINES_H
