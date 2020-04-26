#pragma once
struct ComponentManager_t;
struct Entity_t;

struct Component_t
{
    Component_t(ComponentManager_t* manager) : manager(manager) {}

    virtual ~Component_t() {};
    //TODO: Keep a reference to the manager to delete from there on destroy

    ComponentManager_t* manager  = nullptr;
    uint16_t entityId;
    uint16_t componentId = lastComponentId++;

    inline static uint16_t lastComponentId = 1;
};
