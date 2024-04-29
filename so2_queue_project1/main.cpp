#include <iostream>
#include <ncurses.h>
#include <vector>
#include "Station.h"
#include "Coordinates.h"

Coordinates director_coor= Coordinates(25,25);
Coordinates client_coor = Coordinates(5,25);
Station stations[1] = {Station(Coordinates(3,4))};
int destStation=0;


int main() {
    std::cout << "Hello, World!" << std::endl;










    return 0;
}
