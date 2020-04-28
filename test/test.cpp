#include "circle.h"
#include <gtest/gtest.h>

TEST(Circle, isCheck)
{
    bool k = CircleCheck("1", "2", "3");
    bool c = CircleCheck("1235.123", "64234.13123", "1256.1421");
    ASSERT_EQ(true, k);
    ASSERT_EQ(true, c);
}
TEST(Circle, isNotCheck)
{
    bool a = CircleCheck("qweqwewq", "123", "dada");
    bool b = CircleCheck(" ", " ", " ");
    bool minus = CircleCheck("-1", "2", "3");
    bool zero = CircleCheck("1", "2", "0");
    ASSERT_EQ(false, a);
    ASSERT_EQ(false, b);
    ASSERT_EQ(false, minus);
    ASSERT_EQ(false, zero);
}
TEST(Perimetr, Valid)
{
    ASSERT_FLOAT_EQ(12.56, CirclePerimetr("2"));
    ASSERT_FLOAT_EQ(6.28, CirclePerimetr("1"));
    ASSERT_FLOAT_EQ(62.8, CirclePerimetr("10"));
}
TEST(Area, Valid)
{
    ASSERT_FLOAT_EQ(12.56, CircleArea("2"));
    ASSERT_FLOAT_EQ(3.14, CircleArea("1"));
    ASSERT_FLOAT_EQ(314, CircleArea("10"));
}