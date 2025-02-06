#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
 public:
  int tupleSameProduct(vector<int>& nums) {
    int ans = 0;
    unordered_map<int, int> count;

    for (int i = 0; i < nums.size(); ++i)
      for (int j = 0; j < i; ++j)
        ans += count[nums[i] * nums[j]]++ * 8;

    return ans;
  }
};

int main() {
  Solution sol;
  vector<int> nums = {2, 3, 4, 6,6,8};
  cout << "Number of tuples with the same product: " << sol.tupleSameProduct(nums) << endl;
  return 0;
}