#include "counter.h"
#include <iostream>

Counter::Counter(QObject* parrent) : QObject(parrent) {
    // Утсанавливаем соединение между сигналом created и слотом onCreated
    connect(this, &Counter::created, this, &Counter::onCreated);
    emit created(); // Генерируем сигнал created
}

void Counter::onCreated() {
    std::cout << "Counter Object created!" << std::endl;
}
