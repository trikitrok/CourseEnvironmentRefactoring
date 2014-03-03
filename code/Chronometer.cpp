#include "Chronometer.h"

Chronometer::Chronometer() 
{}

Chronometer::~Chronometer() 
{}

void Chronometer::start() {
  this->startTime = clock();
}

void Chronometer::end() {
  clock_t endTime = clock();
  this->duration = static_cast<int>((endTime - this->startTime) / CLOCKS_PER_SEC);
}

int Chronometer::getDurationInSeconds() const {
  return this->duration;
}