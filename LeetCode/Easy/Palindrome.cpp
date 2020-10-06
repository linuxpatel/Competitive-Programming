#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(unsigned int x) {
      // if(x<0)
      //  {x=-x;}
        unsigned int res=0;
         while(true)
         {
             res=res*10+x%10;
             x=x/10;
         }
    return res;
    }
};

int main()
{
  Solution s;
  int num;
  cin>>num;
  s.isPalindrome(num);
  return 0;
}
