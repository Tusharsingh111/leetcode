#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int increasing = 1;
        int decreasing = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                increasing += 1;
                decreasing = 1;
            } else if (nums[i] < nums[i - 1]) {
                decreasing += 1;
                increasing = 1;
            } else {
                increasing = 1;
                decreasing = 1;
            }
            ans = max(ans, max(increasing, decreasing));
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 4, 2, 8, 10, 9};
    cout << "Longest Monotonic Subarray Length: " << sol.longestMonotonicSubarray(nums) << endl;
    return 0;
}
