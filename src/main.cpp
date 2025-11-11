#include <memory>
#include "bohlebots.h"
#include "../include/util/debug.h"

auto bot = std::make_unique<BohleBots>();

void setup() {
    Debug::header();
}

void loop() {
    bot->update();
}