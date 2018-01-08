//
// Created by Scott Surrao on 2018-01-07.
//

#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"
#include "Player.h"


class Enemy : public Entity {
    // Enemy row and column position
    int row = 5;
    int column = 7;
    //PLayer character row and column position
    int playerRow;
    int playerColumn;
    //Pointer to Player Character
    class Player *pc;

public:
    //Sets the new location of the Enemy
    void setLocation(int row, int column);
    //Getters
    Player* getPlayer();
    int getRow();
    int getColumn();
    int getPlayerRow();
    int getPlayerColumn();
    //Sets new Player location
    void setPlayerLocation(int row, int column);
    //Whenever player moves. PLayer Characters new position is updated
    void update();
   // ~Enemy();


};

#endif //ENEMY_H
