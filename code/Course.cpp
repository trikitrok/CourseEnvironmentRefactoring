#include "Course.h"

#include "Chronometer.h"

#include <Windows.h>

Course::Course(const std::string & name, Chronometer * chronometer)
: name(name), chronometer(chronometer) {

  // Setting college property
  const DWORD buffSize = 65535;
  static char buffer[buffSize];
  if (GetEnvironmentVariableA("ENV_COLLEGE", buffer, buffSize)) {
    this->college = std::string(buffer);
  } else {
    this->college = "";
  }
}

Course::~Course() {
  delete chronometer;
}

void Course::start() {
  chronometer->start();
}

void Course::end() {
  chronometer->end();
}

std::string Course::getName() const {
  return this->name;
}

std::string Course::getCollege() const {
  return this->college;
}

int Course::getDurationInSeconds() const {
  return chronometer->getDurationInSeconds();
}

bool Course::isShort() const {
  const int twoMinutes = 2 * 60;
  return getDurationInSeconds() < twoMinutes;
}

bool Course::isLong() const {
  return !isShort();
}