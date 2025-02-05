#include<iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
 public:
  bool areAlmostEqual(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    vector<int> arr;
    for (int i = 0; i < s1.length(); ++i)
      if (s1[i] != s2[i])
        arr.push_back(i);
    return arr.size() == 0 || (arr.size() == 2 && s1[arr[0]] == s2[arr[1]] && s1[arr[1]] == s2[arr[0]]);
  }
};
int main(){
    Solution sol;
    string s1 = "bank";
    string s2 = "kanb";
    cout << "Are Almost Equal: " << sol.areAlmostEqual(s1, s2) << endl;
    return 0;
}