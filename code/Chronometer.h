#pragma once

#include <ctime>

class Chronometer
{
public:
  Chronometer();
  virtual ~Chronometer();

  void start();
  void end();

  int getDurationInSeconds() const;

private:
  int duration;
  clock_t startTime;
};

