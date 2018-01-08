

#ifndef CELL_H
#define CELL_H

#include "Entity.h"

class Cell {
    char originalFloor = '0';
    Entity *entity = nullptr;

public:
    char getOriginalFloor();
    void setOriginalFloor(char tile);
    void setEntity(Entity * ent);
    Entity* getEntity();
    

};

#endif