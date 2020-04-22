#pragma once
#include <chrono>

struct TimeLogic_t 
{

    void Update();

    float deltaTime = 0.f;

private:
    std::chrono::time_point<std::chrono::system_clock> lastTime;
    bool first = true;
};
