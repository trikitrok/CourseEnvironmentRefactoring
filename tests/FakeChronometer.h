#pragma once

#include "../code/Chronometer.h"

class FakeChronometer : public Chronometer
{
public:
  FakeChronometer(int durationInSeconds)
  {
    this->durationInSeconds = durationInSeconds;
  }

  virtual ~FakeChronometer() {}

  virtual int getDurationInSeconds() const {
    return this->durationInSeconds;
  }

private:
  int durationInSeconds;

};

