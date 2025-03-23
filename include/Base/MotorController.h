//
// Created by julius on 23.03.2025.
//

#ifndef MOTORCONTROLLER_H
#define MOTORCONTROLLER_H

#include <Config.h>

class MotorController {
public:
    static void Motor(int nr, int speed);
    MotorController();
private:
    static int spdToPWM(int speed);
};
#endif //MOTORCONTROLLER_H
