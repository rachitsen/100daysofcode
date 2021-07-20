#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
  #endif  
  int t;
  cin>>t;
  while(t--)
  {
    int p;
    cin>>p;
    if(p%2==0)
    {
      cout<<"EVEN \n";
    }
    else
    {
      cout<<"ODD \n";
    }
  }

return 0;
}