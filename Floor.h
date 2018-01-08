#ifndef FLOOR_H
#define FLOOR_H


#include <fstream>
#include <iostream>
#include <vector>
#include "Cell.h"
#include "SpawnPoints.h"


 class Floor {

     const int height;
     const int width;
     //Cell **floor;


 class Floor {
     const int height;
     const int width;
     Cell **floor;
     std::vector<SpawnPoints*> spawnPointsVector;
public:

     Cell **floor;
     void printBoard ();
     void setEntity(int row, int column, Entity* ent);
     Floor (const int height, const int width, std::ifstream & file);



     void printBoard ();
  
Floor (const int height, const int width, std::ifstream & file);


};

#endif