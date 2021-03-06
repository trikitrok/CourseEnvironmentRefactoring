#include <gmock/gmock.h>

#include "../code/Course.h"
#include "Helpers/FakeChronometer.h"

#include <cstddef>

using namespace ::testing;

int minutes(int n);
int seconds(int n);

TEST(Course, CanTellWhenItIsShort) {
  Course course("math", NULL, new FakeChronometer(seconds(2)));

  course.start();
  course.end();

  ASSERT_TRUE(course.isShort());
}

TEST(Course, CanTellItIsLong) {
  Course course("math", NULL, new FakeChronometer(minutes(3)));

  course.start();
  course.end();

  ASSERT_TRUE(course.isLong());
}

// Helpers
int minutes(int n) {
  return seconds(n * 60);
}

int seconds(int n) {
  return n;
}