#include "CourseEnvironment.h"

#include <Windows.h>

CourseEnvironment::CourseEnvironment(const std::string & college) {
  this->college = college;
}

CourseEnvironment::~CourseEnvironment() 
{}

CourseEnvironment * CourseEnvironment::create() {
  std::string college = "";

  const DWORD buffSize = 65535;
  static char buffer[buffSize];

  if (GetEnvironmentVariableA("ENV_COLLEGE", buffer, buffSize)) {
    college = std::string(buffer);
  }

  return new CourseEnvironment(college);
}

std::string CourseEnvironment::getCollege() const {
  return this->college;
}