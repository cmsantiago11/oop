#ifndef NEUMATIC_H
#define NEUMATIC_H

#include "values/direction.h"
#include "actuator/actuator.h"

class Neumatic: public Actuator {
public:
    Neumatic():Actuator(){};
    void move(Direction direction);
};


void Neumatic::move(Direction direction) {
    Serial.print("Neumatic: ");
    Serial.println(direction.getSpeed());
    Serial.println("-");
    Serial.println(direction.getDirection()); 
}

#endif