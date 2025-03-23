//
// Created by julius on 23.03.2025.
//

#pragma once

#include <Arduino.h>

extern "C" {
    inline int _write(const int fd, const char *ptr, const int len) {
        (void) fd;
        return Serial.write(ptr, len);
    }
}

