#include "Cell.h"

//Cell::Cell(char originalFloor): originalFloor(originalFloor), entity(nullptr) {
//}

char Cell::getOriginalFloor() {
    return originalFloor;
}

void Cell::setOriginalFloor(char tile) {
	originalFloor = tile;
}