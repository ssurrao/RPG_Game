#ifndef FLOOR_H
#define FLOOR_H

#include <iostream>
#include <fstream>
#include <vector>
#include "SpawnPoints.h"
#include "Entity.h"




class Player;
class Enemy;
class Cell;
class Entity;

class Floor {
    //Dimensions of the floor
     const int height;
     const int width;
    //The 2d array
     Cell **floor;
    //Player character pointer
     Player* pc;
    //List of enemies
     std::vector<Enemy*> enemyList;

     std::vector<SpawnPoints*> spawnPointsVector;
public:
     void printBoard ();
     void setEntity(int row, int column, Entity* ent);
     Floor (const int height, const int width, std::ifstream & file);
    //Sets player character pointer, can be added to constructor later.
     void setPC(Player* pc);
    //get cell pointer at specific index
     Cell* getCell(int row, int column);

};

#endif