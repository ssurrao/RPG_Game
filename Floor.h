#ifndef FLOOR_H
#define FLOOR_H


#include <fstream>
#include <iostream>
#include "Cell.h"

 class Floor {

  const int height;
  const int width;
  Cell **floor;

public:

  void printBoard ();
  
Floor (const int height, const int width, std::ifstream & file);

};

#endif