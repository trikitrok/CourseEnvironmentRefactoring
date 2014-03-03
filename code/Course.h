#pragma once

#include <string>

class Chronometer;
class CourseEnvironment;

class Course
{
public:
  Course(const std::string & name, CourseEnvironment * environment, Chronometer * chronometer);
  virtual ~Course();

  void start();
  void end();

  bool isShort() const;
  bool isLong() const;

  std::string getName() const;
  std::string getCollege() const;
  int getDurationInSeconds() const;

private:
  Chronometer * chronometer;
  CourseEnvironment * environment;
  std::string name;
};

