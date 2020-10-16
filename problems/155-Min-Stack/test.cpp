#include "kernel.h"
#include <gtest/gtest.h>
#include <string>
using namespace std;

TEST(_155, _1)
{
    MinStack _stack;
    _stack.push(-2);
    _stack.push(0);
    _stack.push(-3);
    EXPECT_EQ(_stack.getMin(), -3);
    _stack.pop();
    EXPECT_EQ(_stack.top(), 0);
    EXPECT_EQ(_stack.getMin(), -2);
}