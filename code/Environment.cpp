#include "Environment.h"

#include <Windows.h>

Environment::Environment(const std::string & college) {
  this->college = college;
}

Environment::~Environment() 
{}

Environment * Environment::createEnvironment() {
  std::string college = "";

  const DWORD buffSize = 65535;
  static char buffer[buffSize];

  if (GetEnvironmentVariableA("ENV_COLLEGE", buffer, buffSize)) {
    college = std::string(buffer);
  }

  return new Environment(college);
}