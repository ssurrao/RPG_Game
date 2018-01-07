#include "Floor.h"

using namespace std;

//Constructor for Floor
//for file variable. An ifstream variable must already be created with corresponding floor file.
Floor::Floor(const int height, const int width, ifstream& file): height(height), width(width), floor(new Cell*[height]) {
    
    for(int i = 0; i < height; ++i) {
        floor[i] = new Cell[width];
    }
    char tile;
    for(int z = 0; z < height; ++z) {
        for(int s = 0; s < width; ++s) {
            file.get(tile);
            //not a pointer
            floor[z][s] = Cell();
            floor[z][s].setOriginalFloor(tile);

        }
    }
}

void Floor::printBoard() {
    for(int z = 0; z < height; ++z) {
        for(int k = 0; k < width; ++k) {
            //cout << k << endl;
            cout << floor[z][k].getOriginalFloor();
        }

    }
}
