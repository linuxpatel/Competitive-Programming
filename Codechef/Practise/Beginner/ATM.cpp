#include <bits/stdc++.h>
using namespace std;

int main()
{
  int X{}; //withdraw -> X
  cin>>X;

  double Y{}; //Initital balance -> Y
  cin>>Y;

  cout<<setprecision(2)<<fixed;

  if(X%5==0 && Y-X-0.5>=0)
  {
    cout<<Y-X-0.5<<endl;
  }
  else
  {
    cout<<Y<<endl;
  }
  return 0;
}
