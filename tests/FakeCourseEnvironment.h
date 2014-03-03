#pragma once

#include "../code/CourseEnvironment.h"

class FakeCourseEnvironment : public CourseEnvironment
{
public:
  FakeCourseEnvironment(const std::string & college)
    : CourseEnvironment(college) {}

  virtual ~FakeCourseEnvironment() {}
};

