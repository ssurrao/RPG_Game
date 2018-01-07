

#ifndef CELL_H
#define CELL_H

#include "Entity.h"

class Cell {
    const char originalFloor;

public:
    char getOriginalFloor();
    Entity *entity;

Cell (char originalFloor);
};

#endif