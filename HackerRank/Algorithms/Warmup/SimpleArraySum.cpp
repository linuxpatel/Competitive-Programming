#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   int i=0;
   cin>>n;
   int sum=0;
   int ar[n];

    for( ;i<n; i++)
   {
     cin>>ar[i];

     sum+=ar[i];

   }
   cout<<sum<<endl;
   return 0;
}
