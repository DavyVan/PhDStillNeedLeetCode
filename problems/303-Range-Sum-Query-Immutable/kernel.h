#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> *nums;
public:
    NumArray(vector<int>& nums);
    
    int sumRange(int i, int j);
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
