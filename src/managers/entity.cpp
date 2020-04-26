#include "entity.h"
#include "component/component.h"

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

void EntityMan_t::DestroyEntity(uint16_t eid){
    Entity_t& e = GetEntity(eid);

    for (const auto& component : e.components){
        auto& comp = component.second;
        comp->manager->DestroyComponentsByEntityId(eid);
    }
    //TODO: Remove from entities, but the components point to the entities.
/*     std::remove_if(

    ); */
}

Entity_t& EntityMan_t::CreateEntity(){      
    return entities.emplace_back();    
}