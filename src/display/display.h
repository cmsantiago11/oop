#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>
#include "values/direction.h"

class Display 
{
private:
public:
    Display(){};
    void show(Direction direction); 
};


void Display::show(Direction direction){
    Serial.println(direction.getSpeed());
}

#endif