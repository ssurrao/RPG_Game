

#ifndef CELL_H
#define CELL_H
#include "Entity.h"


class Entity;
class Cell {
    int row;
    int column;
    char originalFloor = '0';
    Entity *entity = nullptr;

public:
    char getOriginalFloor();
    void setOriginalFloor(char tile);
    void setEntity(Entity * ent);
    Entity* getEntity();
    int getRow();
    int getColumn();
    void setRow(int val);
    void setColumn(int val);

};

#endif