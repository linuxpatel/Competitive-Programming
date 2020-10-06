#include<iostream>
using namespace std;

class Solution {
  public:
    int myAtoi(string s) {
        int res=0;
        for(int i=0; s[i]!='\0'; i++)
           res=res*10+s[i]%10;
           return res;
    }
};

int main()
{
  Solution s;
  // s.atoi(&str);
  s.myAtoi("str");

  return 0;
}
