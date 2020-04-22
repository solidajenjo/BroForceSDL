#pragma once
#include "manager.h"

struct Input_t : public Manager_t{

    bool Update(float dt) override;

    bool quit = false;
};
