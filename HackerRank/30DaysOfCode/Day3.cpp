#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    //Condition for Weird
    if(N%2!=0 || (N%2==0 && (N>=6 && N<=20)))
      cout<<"Weird"<<endl;
    
    //Condition for Not Weird
    else if(N%2==0 || N>20)
    cout<<"Not Weird"<<endl;

    return 0;
}
