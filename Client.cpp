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

    delete floor;

    return 0;
}
