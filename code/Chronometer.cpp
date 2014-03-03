#include "Chronometer.h"

Chronometer::Chronometer() 
{}

Chronometer::~Chronometer() 
{}

void Chronometer::start() {
  this->startTime = clock();
}

void Chronometer::end() {
  this->endTime = clock();
}

int Chronometer::getDurationInSeconds() const {
  return static_cast<int>((endTime - this->startTime) / CLOCKS_PER_SEC);
}