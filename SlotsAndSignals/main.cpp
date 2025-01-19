#include <QCoreApplication>
#include <iostream>
#include "counter.h"

void onCounterChanged(int newValue);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Counter counter{};

    QObject::connect(&counter, &Counter::increased, onCounterChanged);
    QObject::connect(&counter, &Counter::decreased, onCounterChanged);

    counter.increase();
    counter.decrease();
    counter.increase();
    counter.decrease();
    counter.increase();

    return a.exec();
}

void onCounterChanged(int newValue) {
    std::cout << "New value: " << newValue << std::endl;
}
