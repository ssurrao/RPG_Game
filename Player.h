//
// Created by Scott Surrao on 2018-01-07.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "Enemy.h"
#include <vector>


class Player : public Entity {
    //Player row and column position
    int row;
    int column;
    //Vector of pointers to all Enemies
    vector < Enemy * > enemyList;
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



};

#endif //PLAYER_H
