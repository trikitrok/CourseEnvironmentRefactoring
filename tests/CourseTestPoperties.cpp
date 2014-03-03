#include <gmock/gmock.h>

#include "../code/Course.h"
#include "FakeCourseEnvironment.h"

#include <cstddef>
#include <Windows.h>

using namespace ::testing;

TEST(ACourse, IsCreated) {
  Course course("math", NULL, NULL);

  ASSERT_THAT(course.getName(), Eq("math"));
}

TEST(ACourse, WhenCreatedInitializesCollegeProperty) {
  Course course("whatever", new FakeCourseEnvironment("Yale"), NULL);

  ASSERT_THAT(course.getCollege(), Eq("Yale"));
}