#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
  int N{};
  int A[100];
  for(int i=1; i<100; i++)
  {
    cin>>N;
    if(i==42)
    break;
    else
    N++;
  }
  for(int i=0; i<N; i++)
  {
    cout<<A[i]<<endl;
  }
  return 0;
}
