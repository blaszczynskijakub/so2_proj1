//
// Created by vboxuser on 4/28/24.
//

#include "Client.h"

extern int destStation;

std::thread Client::moveClient() {
    while (runningThread) {
        if(start.getY()<dest.getY())
        {
            start.setY(start.getY()+speed);
        }
        else if (start.getY()>dest.getY())
        {
            start.setY(start.getY()-speed);
        }
        else if(start.getX()<dest.getX())
        {
            start.setX(start.getX()+speed);

        }
        else if(!reachedDirector)
        {
            reachedDirector= true;
            dest= Coordinates();
            destx= stations[destStation];
            desty = stations[]

        }
        else
        {
            arrived= true;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000/speed));

    }
}

void Client::draw() {
    mvaddch(start.getY(), start.getX(), letter);


}

Client::Client(int speed, bool running, Coordinates start, Coordinates dest,
               char input_letter) {
    this->runningThread = running;
    this->start = start;
    this->dest=dest;
    this->move = std::thread(&Client::moveClient, this);
    this->letter = input_letter;
    this->speed=speed;

}

void Client::stopTread() {
    runningThread = false;
    move.join();
}

//void Client::setNewDir(int newx, int newy) {
//    this->destx=newx;
//    this->desty=newy;
//}
