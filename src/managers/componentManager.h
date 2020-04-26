#pragma once
#include <stdint.h>
#include <algorithm>
#include "component/entity.h"
#include "managers/entityManager.h"

struct ComponentManager_t
{
 
    virtual ~ComponentManager_t() {}

    virtual bool Start() { return true; }
    
    virtual bool Update(float dt) { return true; }

    virtual bool Clean() { return true; } 
            
    virtual void DestroyComponentsByEntityId(EntityMan_t* entitiyMan, uint16_t eid) {}
    
protected:

    template<typename T>
    void DestroyComponentsByEntityIdGeneric(EntityMan_t* entityMan, T& componentContainer, uint16_t eid){         
        auto it = componentContainer.begin();
        auto end = componentContainer.end();

        for ( ; it < end; ++it){
            if ((*it).entityId == eid){
                std::iter_swap(it, end - 1);
                entityMan->UpdateComponentReferences((*it).entityId, (*(end - 1)).componentId, &(*it)); 
                componentContainer.pop_back();                               
                --end;
            }
        }
    }
    
};
