#include "counter.h"

void Counter::increase() {
    value++;
    emit increased(value);
}

void Counter::decrease() {
    value--;
    emit decreased(value);
}
