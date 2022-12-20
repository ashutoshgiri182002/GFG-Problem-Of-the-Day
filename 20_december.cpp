//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
        
        int temp = arr[0] - 0;
        int ans1 = 0;
        for(int i=1;i<n;i++){
            temp = max(temp, arr[i-1]-i+1);
            ans1 = max(ans1,temp+i-arr[i]);
        }
        
        int temp1 = arr[0] + 0;
        int ans2 = 0;
        for(int i=1;i<n;i++){
            temp1 = min(temp1,arr[i-1]+i-1);
            ans2 = max(ans2,arr[i]+i-temp1);
        }
        
        return max(ans1,ans2);
        
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends
