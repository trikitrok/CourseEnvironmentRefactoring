#include <gmock/gmock.h>

#include "../code/Course.h"
#include "../code/Chronometer.h"

#include <Windows.h>

using namespace ::testing;

// Fixture
class ACourse : public Test {
protected:
  Course * course;

  virtual void SetUp() {
    course = new Course("math", new Chronometer);
  }

  virtual void TearDown() {
    delete course;
  }
};

TEST_F(ACourse, IsCreated) {
  ASSERT_THAT(course->getName(), Eq("math"));
}

// Needs environment variable ENV_COLLEGE with value Standford
TEST_F(ACourse, WhenCreatedInitializesCollegeProperty) {
  ASSERT_THAT(course->getCollege(), Eq("Stanford"));
}