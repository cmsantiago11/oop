#include <Arduino.h>
#include "actuator/actuator.h"
#include "values/direction.h"
#include "actuator/neumatic.h"
#include "actuator/band.h"
#include "display/display.h"

Neumatic neumatic = Neumatic();
Display display = Display();


void Excute(Neumatic actuator, Direction direction, Display display){
  actuator.move(direction);
  display.show(direction);
}

void setup() {
  Serial.begin(115200);
}

void loop() {
  delay(1000);
  Excute(neumatic, Direction(100, false), display);
}
