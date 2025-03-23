//
// Created by julius on 23.03.2025.
//

#ifndef MOTORCONTROLLER_H
#define MOTORCONTROLLER_H

#include "Arduino.h"
#include "Base/PWMHandler.h"

class Motor {
public:
    explicit Motor(int pin, int dir, int ena);
    explicit Motor(int pin, int ena);
    Motor();

    void speed(int speed) const;
private:
    int _dir{-1};

    PWMHandler pwmHandler;
};

#endif //MOTORCONTROLLER_H
