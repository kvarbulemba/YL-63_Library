# SensorYL Library

## Overview (English)

The **SensorYL** library is designed to simplify the interaction with sensors connected to Arduino. It supports both digital and analog pins, with automatic signal inversion for convenience.

### Features:
- Supports both digital and analog pins.
- Automatically inverts the sensor signal.
- Easy-to-use API for quick setup and usage.

### Installation:
1. Download or clone the repository.
2. Place the `SensorYL` folder into the `libraries` folder of your Arduino IDE directory.
3. Restart the Arduino IDE.

### Usage:

#### Example Code:
```cpp
#include <SensorYL.h>

SensorYL sensor;

void setup() {
    Serial.begin(9600);
    sensor.apply(2);  // Assign the pin connected to the sensor
}

void loop() {
    int sensorValue = sensor.read(); // Read the inverted signal from the sensor
    Serial.println(sensorValue);     // Print the value (0 or 1)
    delay(1000);
}
