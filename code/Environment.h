#pragma once

#include <string>

class Environment
{
public:
  virtual ~Environment();

  static Environment * createEnvironment();

private:
  Environment(const std::string & college);
  std::string college;
};

