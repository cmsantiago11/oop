#ifndef ACTUATOR_H
#define ACTUATOR_H

#include "values/direction.h"

class Actuator {
    public:
        virtual void move(Direction direction);
};

#endif