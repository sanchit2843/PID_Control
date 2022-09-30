#include <PID.h>
#include <gtest/gtest.h>

TEST(PID, case1) {
  PID pid(0.1, 0.1, 0.1);
  EXPECT_EQ(50.55, pid.calculate(5, 0, 0.01));
  // EXPECT_EQ(0.61, pid.calculate(5, 50.55, 0.01));
}

TEST(PID, case2) {
  PID pid(0.1, 0.01, 0.2);
  EXPECT_EQ(20.5025, pid.calculate(5, 0, 0.05));
}
