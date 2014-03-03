#include <gmock/gmock.h>

#include "../code/Course.h"
#include "../code/Chronometer.h"
#include "../code/CourseEnvironment.h"

#include <cstddef>
#include <Windows.h>

using namespace ::testing;

TEST(ACourse, IsCreated) {
  Course course("math", NULL, NULL);

  ASSERT_THAT(course.getName(), Eq("math"));
}

// Needs environment variable ENV_COLLEGE with value Standford
TEST(ACourse, WhenCreatedInitializesCollegeProperty) {
  Course course("math", CourseEnvironment::create(), NULL);

  ASSERT_THAT(course.getCollege(), Eq("Stanford"));
}