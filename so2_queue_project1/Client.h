//
// Created by vboxuser on 4/28/24.
//

#ifndef SO2_QUEUE_PROJECT1_CLIENT_H
#define SO2_QUEUE_PROJECT1_CLIENT_H


#include <thread>
#include <ncurses.h>
#include "Director.h"
#include "Coordinates.h"

class Client {
private:
    bool runningThread;
    char letter;

    std::thread move;
   Coordinates start;
   Coordinates dest;
    int speed;
    bool arrived= false;
    bool reachedDirector= false;
    std::thread moveClient();
    Client(int speed, bool running, Coordinates start, Coordinates dest, char input_letter);
    void draw();
    void stopTread();
    void setNewDir(int newx, int newy);




};


#endif //SO2_QUEUE_PROJECT1_CLIENT_H
