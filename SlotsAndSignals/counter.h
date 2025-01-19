#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter :  public QObject
{
    Q_OBJECT

public:
    explicit Counter(QObject* parrent = nullptr);

signals:
    void created();

public slots:
    void onCreated();
};

#endif // COUNTER_H
