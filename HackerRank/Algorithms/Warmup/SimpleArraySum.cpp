#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, i;
   cin>>n;
   int sum=0;
   int ar[n];
   
    for(i=0; i<n; i++)
   {
     cin>>ar[i];

     sum+=ar[i];

   }
   cout<<sum<<endl;
   return 0;
}
