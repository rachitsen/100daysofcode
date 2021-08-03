// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int n = nums.size();
        int x = 0, r1 = 0, r2 = 0; 
        
        for (int i = 0; i < n; i++) 
        x = x ^ nums[i]; 
  
   
        int fsb = x & (~(x - 1)); 
  
    
        for (int i = 0; i < n; i++) 
        { 
            if ((nums[i] & fsb) != 0) 
                r1 = r1 ^ nums[i]; 
            else
                r2 = r2 ^ nums[i]; 
        } 
        
        vector<int> v;
        v.push_back(r1);
        v.push_back(r2);
        sort(v.begin(),v.end());
        return v;
    }
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
