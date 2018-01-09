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
     const int height;
     const int width;
     Cell **floor;
     Player* pc;
     std::vector<Enemy*> enemyList;
     std::vector<SpawnPoints*> spawnPointsVector;
public:
     void printBoard ();
     void setEntity(int row, int column, Entity* ent);
     Floor (const int height, const int width, std::ifstream & file);
     void setPC(Player* pc);
     Cell* getCell(int row, int column);

};

#endif