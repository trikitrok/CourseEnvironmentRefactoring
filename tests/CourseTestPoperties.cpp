#include <gmock/gmock.h>

#include "../code/Course.h"
#include "Helpers/FakeCourseEnvironment.h"

#include <cstddef>

using namespace ::testing;

TEST(ACourse, IsCreated) {
  Course course("math", NULL, NULL);

  ASSERT_THAT(course.getName(), Eq("math"));
}

TEST(ACourse, WhenCreatedInitializesCollegeProperty) {
  Course course("whatever", new FakeCourseEnvironment("Yale"), NULL);

  ASSERT_THAT(course.getCollege(), Eq("Yale"));
}