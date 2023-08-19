#ifndef DIRECTION_H
#define DIRECTION_H

#include <Arduino.h>

class Direction
{
private:
    uint8_t speed;
    bool direction;
public:
    Direction(uint8_t speed, bool direction);
    uint8_t getSpeed();
    bool getDirection();
};

#endif