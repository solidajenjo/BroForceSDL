#pragma once
struct Manager_t;

struct Component_t
{
    Component_t(Manager_t* manager) : manager(manager) {}

    virtual ~Component_t() {};
    //TODO: Keep a reference to the manager to delete from there on destroy

    Manager_t* manager;
    uint16_t entityId;
    uint16_t componentId;
};
