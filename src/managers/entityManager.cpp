#include "entityManager.h"
#include "component/component.h"
#include "component/entity.h"
#include "managers/entityManager.h"
#include "managers/componentManager.h"
#include <algorithm>

bool EntityMan_t::Clean(){
    return true;
}

void EntityMan_t::SetEntityActive(uint16_t eid, bool active){
    Entity_t& e = GetEntity(eid);
    e.active = active;
}

Entity_t& EntityMan_t::GetEntity(uint16_t eid){    
    auto it = std::find_if(entities.begin(), entities.end(), [eid](const Entity_t& e){
        return e.id == eid;
    });
    return (*it); //TODO: What if not found?   
}

void EntityMan_t::UpdateComponentReferences(uint16_t eid, uint16_t cid, Component_t* newAdress){
    Entity_t& e = GetEntity(eid);
    e.UpdateComponentReferences(cid, newAdress);
}

void EntityMan_t::DestroyEntity(uint16_t eid){
    Entity_t& e = GetEntity(eid);

    for (const auto& component : e.components){
        auto& comp = component.second;
        comp->manager->DestroyComponentsByEntityId(this, eid);
    }
}

Entity_t& EntityMan_t::CreateEntity(){      
    return entities.emplace_back();    
}