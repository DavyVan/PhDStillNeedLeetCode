#include "kernel.h"
#include <gtest/gtest.h>

TEST(_225, _1)
{
    MyStack _stack;
    _stack.push(1);
    _stack.push(2);
    _stack.push(3);
    EXPECT_EQ(_stack.top(), 3);
    EXPECT_EQ(_stack.pop(), 3);
    _stack.push(4);
    EXPECT_EQ(_stack.pop(), 4);
    EXPECT_EQ(_stack.empty(), false);
    EXPECT_EQ(_stack.pop(), 2);
    EXPECT_EQ(_stack.pop(), 1);
    EXPECT_EQ(_stack.empty(), true);
}