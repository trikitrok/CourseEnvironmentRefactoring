#include "Course.h"

#include "Chronometer.h"
#include "CourseEnvironment.h"

Course::Course(const std::string & name, CourseEnvironment * environment,
  Chronometer * chronometer)
: name(name), chronometer(chronometer), environment(environment) {
}

Course::~Course() {
  delete chronometer;
  delete environment;
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
  return this->environment->getCollege();
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