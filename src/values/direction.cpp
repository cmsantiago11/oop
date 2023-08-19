
#include "direction.h"

Direction::Direction(uint8_t speed, bool direction) {
    this->speed = speed;
    this->direction = direction;
}

uint8_t Direction::getSpeed() {
    return speed;
}

bool Direction::getDirection() {
    return direction;
}