#include <QCoreApplication>
#include <iostream>
#include "counter.h"

void onCounterChanged(int newValue);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Counter counter{};

    // Перенаправляем сигнал increased на сигнал valueChanged
    QObject::connect(&counter, &Counter::increased, &counter, &Counter::valueChanged);
    // Перенаправляем сигнал decreased на сигнал valueChanged
    QObject::connect(&counter, &Counter::decreased, &counter, &Counter::valueChanged);

    QObject::connect(&counter, &Counter::valueChanged, onCounterChanged);

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
