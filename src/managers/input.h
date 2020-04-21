#pragma once
#include "manager.h"

struct Input_t : public Manager_t{

    bool Update() override;

    bool quit = false;
};
