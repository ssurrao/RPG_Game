#ifndef FLOOR_H
#define FLOOR_H


#include <fstream>
#include <iostream>
#include <vector>
 class Floor
{

  const int height;
  const int width;
  char **floor;

public:

  void printBoard ();
  
Floor (const int height, const int width, std::ifstream & file);

};

#endif