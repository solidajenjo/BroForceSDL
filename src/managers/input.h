#pragma once
#include "componentManager.h"

struct Input_t : public ComponentManager_t{

    bool Update(float dt) override;

    bool quit = false;
};
