#pragma once

struct Manager_t
{
    virtual bool Start() { return true; }
    
    virtual bool Update(float dt) { return true; }

    virtual bool Clean() { return true; } 

};
