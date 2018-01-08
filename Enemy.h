//
// Created by Scott Surrao on 2018-01-07.
//

#ifndef ENEMY_H
#define ENEMY_H


#include "Player.h"




class Player;

class Enemy : public Entity {
    //Pointer to Player Character
    Player *pc;

public:
    //Sets the new location of the Enemy
    void setLocation(int row, int column);
    //Getters
    Player* getPlayer();
    int getRow();
    int getColumn();
    bool inRange();
    //int getPlayerRow();
    //int getPlayerColumn();
    //Sets new Player location
    //void setPlayerLocation(int row, int column);


};

#endif //ENEMY_H
