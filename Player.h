//
// Created by Scott Surrao on 2018-01-07.
//

#ifndef PLAYER_H
#define PLAYER_H

#include<vector>
#include "Cell.h"
#include "Enemy.h"
//class Cell;
class Player : public Entity {
    int row;
    int column;
    std::vector<Cell*> neighbours;
    //Vector of pointers to all Enemies
    std::vector < Enemy * > enemyList;
    Cell* currentCell = nullptr;
    Floor* floor;
public:
    //Attaches a new enemy onto the enemy list
    void attach(Enemy * enemy);
    //Sets new player location
    void setLocation(int row, int column);
    //Getters
    int getRow();
    int getColumn();
    //Whenever Player character moves. All enemies in enemyList are notified of the new coordinates
    //void notify();
    bool moveTo(Cell* cell);
    void updateNeighbours();

   // ~Player();




};

#endif //PLAYER_H
