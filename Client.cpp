
#include "Floor.h"
#include "Enemy.h"
#include "Player.h"



using namespace std;
int main() {
    std::ifstream floor_file("floor.txt");
    Floor *floor = new Floor(25,80,floor_file);
    floor->printBoard();
    Player* p = new Player();
    Enemy* e = new Enemy();
    floor->setEntity(3,7,p);
    floor->setEntity(5,7,e);
    floor->printBoard();
    //cout << endl;
    //cout << floor->floor[3][7].getEntity()->getRow() << endl;
    //floor->move(3,7,4,7);
    //floor->floor[5][7].getEntity()->getPlayerRow() << endl;

    delete p;
    delete e;
    delete floor;

    return 0;
}
