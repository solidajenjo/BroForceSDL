#pragma once
#include <string>
#include <unordered_map>
#include <component/component.h>
#include <component/sprite.h>

struct Component_t;

struct Entity_t{
    uint16_t id = 20;
    std::unordered_map<int, Component_t*> components;
    
    template<class T>
    void AddComponent(T* comp){
        comp->entityId = id;
        components.template insert(std::make_pair(GetComponentTypeId<T>(), comp));
    }

    template<class T>
    T* GetComponent(){
        auto it = components.find(GetComponentTypeId<T>());
        if (it == components.end())
            return nullptr;
        auto comp = (*it).second;
        return dynamic_cast<Sprite_t*>(comp);
    }


private:

    inline static int componentID = 0;

    template<class T>
    int GetComponentTypeId(){
        static int cid = componentID++;
        return cid;
    }

};

struct EntityMan_t{

};