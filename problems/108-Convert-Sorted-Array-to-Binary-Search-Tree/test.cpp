#include "kernel.h"
#include <gtest/gtest.h>

TEST(_108, empty)
{
    EXPECT_EQ(sortedArrayToBST(nullptr, 0), nullptr);
}