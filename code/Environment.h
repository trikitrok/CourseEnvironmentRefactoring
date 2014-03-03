#pragma once

#include <string>

class Environment
{
public:
  Environment(const std::string & college);
  virtual ~Environment();

private:
  std::string college;
};

