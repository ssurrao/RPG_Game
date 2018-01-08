#ifndef FLOOR_H
#define FLOOR_H


#include <fstream>
#include <iostream>
#include "Cell.h"

 class Floor {

     const int height;
     const int width;
     //Cell **floor;

public:
     Cell **floor;
     void printBoard ();
     void setEntity(int row, int column, Entity* ent);
     Floor (const int height, const int width, std::ifstream & file);



};

#endif