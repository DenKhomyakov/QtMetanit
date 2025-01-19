#include <QCoreApplication>
#include <iostream>
#include "counter.h"

// Класс для обраболтки сигнала
class CounterHandler : public QObject {
public:
    void handle(int newValue) {
        std::cout << "Counter value: " << newValue << std::endl;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Counter counter{};
    CounterHandler handler{};

    QObject::connect(&counter, &Counter::increased, &handler, &CounterHandler::handle);

    counter.increase();
    counter.increase();
    counter.increase();

    return a.exec();
}
