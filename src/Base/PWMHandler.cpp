//
// Created by julius on 23.03.2025.
//
#include <Base/PWMHandler.h>
#include <Arduino.h>

PWMHandler::PWMHandler(int pin) {
    _pin = pin;

    ledcAttach(_pin, 1000, 8);
    ledcWrite(_pin, 0);
}

void PWMHandler::setPWM(int value) const {
    ledcWrite(_pin, min(max(value, 0), 255));
}
