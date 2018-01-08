//
// Created by Scott Surrao on 2018-01-07.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "Enemy.h"
#include <vector>


class Enemy;

class Player : public Entity {
    //Vector of pointers to all Enemies
    std::vector < Enemy * > enemyList;
    Cell* currentCell = nullptr;
public:
    //Attaches a new enemy onto the enemy list
    void attach(Enemy * enemy);
    //Sets new player location
    void setLocation(int row, int column);
    //Getters
    int getRow();
    int getColumn();
    //Whenever Player character moves. All enemies in enemyList are notified of the new coordinates
    void notify();

   // ~Player();




};

#endif //PLAYER_H
