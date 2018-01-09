#include <fstream>
#include <iostream>
#include "Floor.h"
#include "Entity.h"
#include "Enemy.h"
#include "Player.h"
#include "Cell.h"


using namespace std;

int main() {
    std::ifstream floor_file("floor.txt");
    Floor *floor = new Floor(25,80,floor_file);
    floor->printBoard();
    Player *pc = new Player();
    pc->setCell(floor->getCell(5,5));
    pc->setFloor(floor);
    floor->setPC(pc);
    floor->setEntity(5,5,pc);
    floor->printBoard();
    pc->moveTo(floor->getCell(5,6));
    floor->printBoard();
    cout << pc->getColumn() << endl;
    delete floor;

    return 0;
}
