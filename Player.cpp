//
// Created by Scott Surrao on 2018-01-07.
//

#include "Player.h"

using namespace std;

int Player::getRow() {
    return this->row;
}

int Player::getColumn() {
    return this->column;
}

void Player::setLocation(int row, int column) {
    this->row = row;
    this->column = column;
}

void Player::attach(Enemy *enemy) {
    enemyList.push_back(enemy);
}

/*void Player::notify() {
    for (int i = 0; i < enemyList.size(); ++i)
        enemyList[i]->update();
}*/

bool Player::moveTo(Cell *cell) {
    if(cell->getEntity() == nullptr && cell->getOriginalFloor() != '-' && cell->getOriginalFloor() != '|') {
        cell->setEntity(this);
        this->currentCell->setEntity(nullptr);
        this->row = cell->getRow();
        this->column = cell->getColumn();
        this->currentCell = cell;
        this->updateNeighbours();
        return true;
    } else {
        return false;
    }

}

void Player::updateNeighbours() {
    this->neighbours.clear();
    for(int i = this->row - 1; i <= this->row + 1; ++i) {
        for(int y = this->column - 1; y <= this->column + 1; ++y ) {
            if (y != this->column && i != this->row) {
                this->neighbours.push_back(this->floor->getCell(i,y));
            }
        }
    }
}

//Player::~Player() {
//    delete this;
//}