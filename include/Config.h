//
// Created by julius on 23.03.2025.
//

#pragma once

#include <Arduino.h>

#define SDA 21 // I2C
#define SCL 22

#define DRIVE_DIS 27 // Motors
#define DRIVE1_PWM 18
#define DRIVE1_DIR 19
#define DRIVE2_PWM 14
#define DRIVE2_DIR 12
#define DRIVE3_PWM 25
#define DRIVE3_DIR 26
#define DRIVE4_PWM 32
#define DRIVE4_DIR 33

#define MOTOR 4 // Motors

#define ENA 2

constexpr int dirPins[] = {DRIVE1_DIR, DRIVE2_DIR, DRIVE3_DIR, DRIVE4_DIR};
constexpr int pwmPins[] = {DRIVE1_PWM, DRIVE2_PWM, DRIVE3_PWM, DRIVE4_PWM};

extern "C" {
    inline int _write(const int fd, const char *ptr, const int len) {
        (void) fd;
        return Serial.write(ptr, len);
    }
}

