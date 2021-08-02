/ { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int countbit(int n)
    {
        int count=0;
        while(n>0)
        {
            n=(n&(n-1));
            count++;
        }
        return count;
    }
    
	int is_bleak(int n)
	{
	    for(int i=n-1;i>0;i--)
	    {
	        if(n == (i + countbit(i)) )
	        {
	            return 0;
	        }
	    }
	    return 1;
	}
};


// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}
  // } Driver Code Ends
