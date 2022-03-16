#include <gtest/gtest.h>

TEST (RetangleAreaTest, InvalidParam) {
    EXPECT_EQ(0, retangleArea(-1, 5));
    EXPECT_EQ(0, retangleArea(10, -2));
    EXPECT_EQ(0, retangleArea(0, 0));
}