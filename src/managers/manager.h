#pragma once

struct Manager_t
{
    virtual bool Start() { return true; }
    
    virtual bool Update() { return true; }

    virtual bool Clean() { return true; } 

};
