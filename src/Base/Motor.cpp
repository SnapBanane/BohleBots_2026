//
// Created by julius on 23.03.2025.
//
#include <Base/Motor.h>
#include <Arduino.h>

Motor::Motor(int pin, int dir, int ena) {
    pinMode(pin, OUTPUT);
    pinMode(dir, OUTPUT);
    pinMode(ena, OUTPUT);
    digitalWrite(ena, LOW);

    this->_dir = dir;
    pwmHandler = PWMHandler(pin);
}

void Motor::speed(int speed) const {
    digitalWrite(_dir, speed > 0 ? HIGH : LOW);
    speed = std::clamp(speed, -100, 100);

    int pwm = map(abs(speed), 0, 100, static_cast<long>(255*0.1), static_cast<long>(255*0.9));

    pwmHandler.setPWM(pwm);
}