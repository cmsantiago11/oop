#ifndef BAND_H
#define BAND_H

#include "values/direction.h"
#include "actuator/actuator.h"

class Band: public Actuator
{
public:
    Band();
    void move(Direction direction);
};

Band::Band(){}

void Band::move(Direction direction) {
    Serial.print("Band: ");
    Serial.println(direction.getSpeed());
    Serial.println("-");
    Serial.println(direction.getDirection()); 
}


#endif