#ifndef SENSOR_YL_H
#define SENSOR_YL_H

#include <Arduino.h>

class SensorYL {
private:
    int pin;        // пін, назначений датчику
    bool isPinSet;  // перевірка, чи було встановлено пін

public:
    // конструктор
    SensorYL() : pin(-1), isPinSet(false) {}

    // метод для призначення піна
    void apply(int assignedPin);

    // метод для зчитування значення з датчика
    int read();
};

#endif
