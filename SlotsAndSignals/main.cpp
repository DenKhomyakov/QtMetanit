#include <QCoreApplication>
#include "counter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Counter counter{};

    return a.exec();
}
