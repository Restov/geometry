#include "circle.h"
#include <gtest/gtest.h>
TEST(Circle, isCheck) {
  bool k = CircleCheck("1", "2", "3");
  bool c = CircleCheck("1235.123", "64234.13123", "1256.1421");
  ASSERT_EQ(true, k);
  ASSERT_EQ(true, c);
}
TEST(Circle, isNotCheck) {
  bool a = CircleCheck("qweqwewq", "123", "dada");
  bool b = CircleCheck(" ", " ", " ");
  ASSERT_EQ(false, a);
  ASSERT_EQ(false, b);
}