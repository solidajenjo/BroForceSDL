#pragma once
#include <unordered_map>
#include <vector>
#include <managers/manager.h>

struct Component_t;

struct Entity_t{

    friend struct EntityMan_t;

    uint16_t id = lastEntityId++;
    std::unordered_map<uint16_t, Component_t*> components;
    
    template<typename T>
    void AddComponent(T* comp){
        comp->entityId = id;
        comp->entity = this;
        components.template insert(std::make_pair(GetComponentTypeId<T>(), comp));
    }

    template<typename T>
    T* GetComponent(){
        auto it = components.find(GetComponentTypeId<T>());
        if (it == components.end())
            return nullptr;
        auto comp = (*it).second;
        return dynamic_cast<T*>(comp);
    }

    
private:

    inline static uint16_t lastEntityId = 1;    
    inline static uint16_t componentID = 1;

    bool active = true;

    template<typename T>
    uint16_t GetComponentTypeId(){
        static uint16_t cid = componentID++;
        return cid;
    }

};

struct EntityMan_t : public Manager_t
{
    
    bool Clean() override;

    Entity_t& CreateEntity();
    Entity_t& GetEntity(uint16_t eid);
    void SetEntityActive(uint16_t eid, bool active);
    void DestroyEntity(uint16_t eid);
    
private:

    std::vector<Entity_t> entities; //TODO: reserve on startup

};
