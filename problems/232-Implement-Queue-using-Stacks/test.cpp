#include "kernel.h"
#include <gtest/gtest.h>

TEST(_232, _1)
{
    MyQueue _queue;
    _queue.push(1);
    _queue.push(2);
    EXPECT_EQ(_queue.peek(), 1);
    EXPECT_EQ(_queue.pop(), 1);
    EXPECT_EQ(_queue.empty(), false);
}

TEST(_232, _2)
{
    MyQueue _queue;
    _queue.push(1);
    _queue.push(2);
    _queue.push(3);
    _queue.push(4);
    EXPECT_EQ(_queue.pop(), 1);
    _queue.push(5);
    EXPECT_EQ(_queue.pop(), 2);
    EXPECT_EQ(_queue.pop(), 3);
    EXPECT_EQ(_queue.pop(), 4);
    EXPECT_EQ(_queue.pop(), 5);
}