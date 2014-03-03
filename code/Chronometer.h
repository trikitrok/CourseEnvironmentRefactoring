#pragma once

#include <ctime>

class Chronometer
{
public:
  Chronometer();
  virtual ~Chronometer();

  void start();
  void end();

  virtual int getDurationInSeconds() const;

protected:
  clock_t endTime;
  clock_t startTime;
};

