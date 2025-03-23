//
// Created by julius on 23.03.2025.
//
#include <Base/MotorController.h>
#include <Arduino.h>
#include <Config.h>

MotorController::MotorController() {
    for (size_t i = 0; i < MOTOR; i++) {
        pinMode(dirPins[i], OUTPUT);
        pinMode(pwmPins[i], OUTPUT);
        pinMode(ENA, OUTPUT);
        digitalWrite(ENA, LOW);
    }
}

void MotorController::Motor(int nr, int speed) {
    std::clamp(speed, -100, 100);
    if (nr > 4 || nr < 0) { return; }
    int pwm = spdToPWM(speed);
    int dir = speed < 0 ? LOW : HIGH;

    digitalWrite(dirPins[nr - 1], dir);
    ledcWrite(pwmPins[nr - 1], pwm);
}

int MotorController::spdToPWM(int speed) {
    if (speed < 0)
        speed *= -1;
    return ((speed * 255) / 100);
}