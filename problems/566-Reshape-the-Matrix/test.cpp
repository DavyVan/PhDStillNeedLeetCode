#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_566, _1)
{
    auto expect = vector<vector<int>>({
        {1, 2, 3, 4}
    });
    vector<vector<int>> mat = {
        {1, 2},
        {3, 4}
    };
    int r = 1;
    int c = 4;

    Solution S;
    auto result = S.matrixReshape(mat, r, c);

    int m = result.size();
    int n = result[0].size();
    EXPECT_TRUE(m == expect.size());
    EXPECT_TRUE(n == expect[0].size());
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            EXPECT_TRUE(result[i][j] == expect[i][j]);
        }
    }
}

TEST(_566, _2)
{
    auto expect = vector<vector<int>>({
        {1, 2},
        {3, 4}
    });
    vector<vector<int>> mat = {
        {1, 2},
        {3, 4}
    };
    int r = 2;
    int c = 4;

    Solution S;
    auto result = S.matrixReshape(mat, r, c);

    int m = result.size();
    int n = result[0].size();
    EXPECT_TRUE(m == expect.size());
    EXPECT_TRUE(n == expect[0].size());
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            EXPECT_TRUE(result[i][j] == expect[i][j]);
        }
    }
}
