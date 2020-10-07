#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(unsigned int x) {
        unsigned int res=0;
        if(x<0 || (x%10==0 && x!=0))
            return 0;
            
          while(x>res || (x%10==0 && x!=0))
          {
              res=res*10+x%10;
           x=x/10;

          }
          return (x==res) || (x==res/10);
          cout<<res<<endl;
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
