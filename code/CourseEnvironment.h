#pragma once

#include <string>

class CourseEnvironment
{
public:
  virtual ~CourseEnvironment();

  static CourseEnvironment * create();

  std::string getCollege() const;

private:
  CourseEnvironment(const std::string & college);
  std::string college;
};

