//
// Created by Scott Surrao on 2018-01-07.
//

#include "Player.h"



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

void Player::attach(Enemy *enemy) {}

void Player::notify() {}