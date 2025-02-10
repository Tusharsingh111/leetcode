#include<iostream>
#include<string>
#include<stack>
using namespace std;
class Solution {
    public:
     string clearDigits(string s) {
       string ans;
   
       for (const char c : s)
         if (isdigit(c))
           ans.pop_back();
         else
           ans += c;
   
       return ans;
     }
   };
   int main(){
         Solution s;
         string str = "abc";
         cout<<s.clearDigits(str);
   }