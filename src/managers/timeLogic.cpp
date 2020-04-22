#include "timeLogic.h"
#include <iostream>

void TimeLogic_t::Update(){
    auto now = std::chrono::system_clock::now();
    int elapsed = std::chrono::duration_cast<std::chrono::milliseconds>
                             (now-lastTime).count();
    lastTime = now;
    if (first) {
        first = false;
        return;
    }
    deltaTime = (float)elapsed / 1000.f;
}