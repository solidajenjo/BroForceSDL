#pragma once
#include <stdint.h>
#include <algorithm>

struct Manager_t
{
 
    virtual ~Manager_t() {}

    virtual bool Start() { return true; }
    
    virtual bool Update(float dt) { return true; }

    virtual bool Clean() { return true; } 
            
    virtual void DestroyComponentsByEntityId(uint16_t eid) {}
    
protected:

    template<typename T>
    void DestroyComponentsByEntityIdGeneric(T& componentContainer, uint16_t eid){         
        auto it = componentContainer.begin();
        auto end = componentContainer.end();

        for ( ; it < end; ++it){
            if ((*it).entityId == eid){
                std::iter_swap(it, end - 1);
                componentContainer.pop_back();                               
                --end;
            }
        }
    }
    
};
