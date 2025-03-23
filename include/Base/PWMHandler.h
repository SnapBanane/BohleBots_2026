//
// Created by julius on 23.03.2025.
//

#ifndef PWMHANDLER_H
#define PWMHANDLER_H

#include "Arduino.h"

class PWMHandler {
public:
    explicit PWMHandler(int pin);

    PWMHandler();

    void setPWM(int value) const;

private:
    int _channel{};
    int _pin{};

    static int _channelCounter;
};

#endif //PWMHANDLER_H
