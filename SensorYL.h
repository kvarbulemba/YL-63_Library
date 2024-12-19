#ifndef SENSOR_YL_H
#define SENSOR_YL_H

#include <Arduino.h>

class SensorYL {
private:
    int pin;        // ��, ���������� �������
    bool isPinSet;  // ��������, �� ���� ����������� ��

public:
    // �����������
    SensorYL() : pin(-1), isPinSet(false) {}

    // ����� ��� ����������� ���
    void apply(int assignedPin);

    // ����� ��� ���������� �������� � �������
    int read();
};

#endif
