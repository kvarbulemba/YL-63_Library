#include "SensorYL.h"

// Призначення піна для датчика
void SensorYL::apply(int assignedPin) {
    pin = assignedPin;
    isPinSet = true;
    pinMode(pin, INPUT);
}

// Зчитування значення з датчика
int SensorYL::read() {
    if (!isPinSet) {
        return -1; // Повернення -1, якщо пін не встановлено
    }
    int value;
    if (pin < 14) { // Якщо пін є цифровим (поки що розглядаємо піні до 13)
        value = digitalRead(pin);
    }
    else { // Якщо пін є аналоговим
        value = analogRead(pin);
    }
    return value; // Повертаємо значення, яке зчитано з піна
}
