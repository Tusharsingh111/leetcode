#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int rotates = 0;

        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) {
                rotates++;
                if (rotates > 1) return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 4, 5, 1, 2};

    cout << (sol.check(nums));

    return 0;
}
