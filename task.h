#ifndef TASK_H
#define TASK_H

#include <QObject>

class Task : public QThread
{
    Q_OBJECT
public:
    Task();
};

#endif // TASK_H
