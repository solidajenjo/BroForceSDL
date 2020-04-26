#pragma once
#include <vector>
#include "component/entity.h"

struct Component_t;

struct EntityMan_t 
{

    bool Clean();
    
    Entity_t& CreateEntity();
    Entity_t& GetEntity(uint16_t eid);
    void SetEntityActive(uint16_t eid, bool active);
    void DestroyEntity(uint16_t eid);

    //Updates the memory address of component #cid of entity #eid
    void UpdateComponentReferences(uint16_t eid, uint16_t cid, Component_t* newAdress);    

private:

    std::vector<Entity_t> entities; //TODO: reserve on startup

};
