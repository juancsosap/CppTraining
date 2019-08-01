#include "E06_Classes.h"

Item::Item(int value) {
    this->value = value;
}

int Item::get() {
    return this->value;
}