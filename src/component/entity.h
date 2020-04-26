#pragma once
#include <unordered_map>
#include <vector>
#include "component/component.h"

struct EntityMan_t;

struct Entity_t{

    friend struct EntityMan_t;

    uint16_t id = lastEntityId++;
    std::unordered_map<uint16_t, Component_t*> components;
    
    template<typename T>
    void AddComponent(T* comp){
        comp->entityId = id;
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
    inline static uint16_t lastcomponentID = 1;

    bool active = true;

    template<typename T>
    uint16_t GetComponentTypeId(){
        static uint16_t cid = lastcomponentID++;
        return cid;
    }

    void UpdateComponentReferences(uint16_t cid, Component_t* newAdress){
        for (auto& c : components){
            if (c.second->componentId == cid)
                components[c.first] = newAdress;
        }
    }
};
