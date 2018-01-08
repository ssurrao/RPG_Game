#include "Cell.h"


//Cell::Cell(char originalFloor): originalFloor(originalFloor), entity(nullptr) {
//}

char Cell::getOriginalFloor() {
    return originalFloor;
}

void Cell::setOriginalFloor(char tile) {
	originalFloor = tile;
}

void Cell::setEntity(Entity *ent) {
    this->entity = ent;
}

Entity* Cell::getEntity() {
    return this->entity;
}

int Cell::getRow() {
    return this->row;
}

int Cell::getColumn() {
    return this->column;
}

void Cell::setRow(int val) {
    this->row = val;
}

void Cell::setColumn(int val) {
    this->column = val;
}