//
// Created by Scott Surrao on 2018-01-07.
//

#ifndef PLAYER_H
#define PLAYER_H

#include<vector>
#include "Cell.h"
#include "Enemy.h"
//class Cell;
class Player : public Entity {
    int row = 5;
    int column = 5;
    //std::vector<Cell*> neighbours;
    //Vector of pointers to all Enemies
    std::vector < Enemy * > enemyList;
    //Current cell the player is in
    Cell* currentCell = nullptr;
    //the floor the player is on
    Floor* floor;
    //8 surrounding spaces
    std::vector<Cell*> neighbours;
public:

    //Attaches a new enemy onto the enemy list
    void attach(Enemy * enemy);
    //Sets new player location
    void setLocation(int row, int column);
    //Getters
    int getRow();
    int getColumn();
  //Move Cells
    bool moveTo(Cell* cell);
    //Updates neighbours vector with new cells
    void updateNeighbours();
    //Sets the floor player is on.
    void setFloor(Floor* floor);
    //Sets the current cell the player is in
    void setCell(Cell *cell);
    //destructor
    ~Player();






};

#endif //PLAYER_H
