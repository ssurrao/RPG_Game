#include "Entity.h"



void Entity::updateNeighbours() {
    this->neighbours.clear();
    for(int i = this->row - 1; i <= this->row + 1; ++i) {
        for(int y = this->column - 1; y <= this->column + 1; ++y ) {
            if (y != this->column && i != this->row) {
                this->neighbours.push_back(this->floor->getCell(i,y));
            }
        }
    }
}