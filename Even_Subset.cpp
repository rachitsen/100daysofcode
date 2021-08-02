// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
class Solution{
  public:
    int countSumSubsets(int a[], int n){
        
        int p=pow(2,n);
        int count=0;
        for(int i=0;i<p;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j))!=0)
                {
                    sum=sum+a[j];
                }
            }
            if((sum%2==0) && (sum!=0))
            {
            count++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    Solution obj;
	    cout << obj.countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}  // } Driver Code Ends
