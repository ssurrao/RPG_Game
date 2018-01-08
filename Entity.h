#ifndef ENTITY_H
#define ENTITY_H


#include "Floor.h"

class Floor;
class Cell;
class Entity {
    int row;
    int column;
    std::vector<Cell*> neighbours;
    virtual bool moveTo(Cell* cell) = 0;
    Floor* floor;
public:
    void updateNeighbours();

};



#endif //RPG_GAME_ENTITY_H

