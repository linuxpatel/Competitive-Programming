#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  int T{};
  cin>>T;

  int N{};
  cin>>N;

  int A[100];

  for(int i=1; i<N; i++)
  {
    cin>>A[i];
    cout<<endl;
  }

   int sum=0;
    for(int i=1; i<N; i++)
    {
      sum+=A[i];
      cout<<sum<<endl;
    }

    for(int i=0; i<N; i++)
    {
      if(sum==0)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }

  return 0;
}
