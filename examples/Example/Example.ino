#include <SensorYL.h>

SensorYL sensor;

void setup() {
    Serial.begin(9600);
    sensor.apply(2);  // Призначення цифрового піна
}

void loop() {
    int sensorValue = sensor.read(); // Зчитування значення з датчика
    Serial.println(sensorValue);      // Виведення значення
    delay(1000);
}
