#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int trappingWater(int a[], int n){
        int unit=0;
        int lmax[n],rmax[n];
        
        lmax[0] = a[0];
        for(int i=1;i<n;i++)
        {
            lmax[i] = max(lmax[i-1] , a[i]);
        }
        
        rmax[n-1] = a[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            rmax[i] = max(rmax[i+1] , a[i]);
        }
        
        for(int i=1;i<n-1;i++)
        {
            unit+=(min(lmax[i] , rmax[i]) - a[i]);
        }
        return unit;
    }
};

int main()
{    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;   
    }
    return 0;
}  
