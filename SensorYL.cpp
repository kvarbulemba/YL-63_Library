#include "SensorYL.h"

// ����������� ��� ��� �������
void SensorYL::apply(int assignedPin) {
    pin = assignedPin;
    isPinSet = true;
    pinMode(pin, INPUT);
}

// ���������� �������� � �������
int SensorYL::read() {
    if (!isPinSet) {
        return -1; // ���������� -1, ���� �� �� �����������
    }
    int value;
    if (pin < 14) { // ���� �� � �������� (���� �� ���������� �� �� 13)
        value = digitalRead(pin);
    }
    else { // ���� �� � ����������
        value = analogRead(pin);
    }
    return value; // ��������� ��������, ��� ������� � ���
}
