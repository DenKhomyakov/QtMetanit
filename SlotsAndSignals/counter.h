#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter :  public QObject
{
    Q_OBJECT

public:
    Counter() {}
    void increase();
    void decrease();

signals:
    void valueChanged(int newValue);
    void increased(int newValue);
    void decreased(int newValue);

private:
    int value{};
};

#endif // COUNTER_H
