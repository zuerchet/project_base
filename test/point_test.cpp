#include "project/Point.hpp"

#include "gtest/gtest.h"

TEST(PointTest, test_a_equals_b) {

    Point2D a{0.0, 1.0};
    Point2D b{2.0, 1.0};
    
    EXPECT_NE (a, b);
}
