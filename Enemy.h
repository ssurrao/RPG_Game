//
// Created by Scott Surrao on 2018-01-07.
//

#ifndef ENEMY_H
#define ENEMY_H
#include <vector>
#include "Floor.h"


class Player;
class Cell;
class Enemy : public Entity {
    int row;
    int column;
    std::vector<Cell*> neighbours;
    //Pointer to Player Character
    Player *pc;
    Floor *floor;
public:
    //Sets the new location of the Enemy
    void setLocation(int row, int column);
    //Getters
    Player* getPlayer();
    int getRow();
    int getColumn();
    bool inRange();
    bool moveTo(Cell* cell);
    //int getPlayerRow();
    //int getPlayerColumn();
    //Sets new Player location
    //void setPlayerLocation(int row, int column);
    void updateNeighbours();


};

#endif //ENEMY_H
