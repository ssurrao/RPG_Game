//
// Created by Scott Surrao on 2018-01-07.
//

#include "Enemy.h"

int Enemy::getRow() {
    return this->row;
}

int Enemy::getColumn() {
    return this->column;
}

void Enemy::setLocation(int row, int column) {
    this->row = row;
    this->column = column;
}

Player* Enemy::getPlayer() {
    return pc;
}

/*int Enemy::getPlayerRow() {
    return this->playerRow;
}

int Enemy::getPlayerColumn() {
    return this->playerColumn;
}*/


/*void Enemy::setPlayerLocation(int row, int column) {
    this->playerRow = row;
    this->playerColumn = column;

}*/

//void Enemy::update() {

//}

bool Enemy::moveTo(Cell *cell) {

    return true;
}

//Enemy::~Enemy() {
  //  delete this;
//}
void Enemy::updateNeighbours() {
    this->neighbours.clear();
    for(int i = this->row - 1; i <= this->row + 1; ++i) {
        for(int y = this->column - 1; y <= this->column + 1; ++y ) {
            if (y != this->column && i != this->row) {
                this->neighbours.push_back(this->floor->getCell(i,y));
            }
        }
    }
}

