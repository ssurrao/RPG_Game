#include "Floor.h"


using namespace std;

//Constructor for Floor
//for file variable. An ifstream variable must already be created with corresponding floor file.
Floor::Floor(const int height, const int width, ifstream& file): height(height), width(width), floor(new Cell*[height]) {
    
    for(int i = 0; i < height; ++i) {
        //This 2D array is not working, wont initialize a Array but instead thinks we are trying to initialize class
        floor[i] = new Cell[width];
    }
    char tile;
    for(int z = 0; z < height; ++z) {
        for(int s = 0; s < width; ++s) {
            file.get(tile);
            //not a pointer
            floor[z][s] = Cell();
            floor[z][s].setOriginalFloor(tile);
            floor[z][s].setRow(z);
            floor[z][s].setRow(s);
            //Add pointer Condition when entity pointer is added to cell
            if (floor[z][s].getOriginalFloor() == '.'){
                spawnPointsVector.push_back(new SpawnPoints(s,z));
            }
        }
    }
}

void Floor::printBoard() {
    for(int z = 0; z < height; ++z) {
        for(int k = 0; k < width; ++k) {
            if(floor[z][k].getEntity() == nullptr) {
                cout << floor[z][k].getOriginalFloor();
            } else {
                cout << '@';
            }
        }

    }
}

void Floor::setEntity(int row, int column, Entity* ent) {
    floor[row][column].setEntity(ent);
}

void Floor::setPC(Player *pc) {
    this->pc = pc;
}

Cell* Floor::getCell(int row, int column) {
    return &this->floor[row][column];
}

