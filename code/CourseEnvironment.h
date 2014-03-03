#pragma once

#include <string>

class CourseEnvironment
{
public:
  virtual ~CourseEnvironment();

  static CourseEnvironment * create();

  std::string getCollege() const;

protected:
  CourseEnvironment(const std::string & college);

private:
  std::string college;
};

