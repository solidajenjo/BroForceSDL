#pragma once
#include<stdint.h>

struct Manager_t
{
    virtual ~Manager_t() {}

    virtual bool Start() { return true; }
    
    virtual bool Update(float dt) { return true; }

    virtual bool Clean() { return true; } 

    virtual void DestroyComponentsByEntityId(uint16_t eid) {};
};
