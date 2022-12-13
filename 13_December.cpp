//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    bool isValid(int arr[], int n, int k, int mid){
        int student = 1;
        int sum = 0;
        
        for(int i =0;i<n;i++){
            sum +=arr[i];
            
            if(sum > mid){
                student++;
                sum = arr[i];
            }
            
            if(student > k) return false;
        }
        
        return true;
    }
  
    int splitArray(int arr[] ,int n, int k) {
        // code here
        
        int low = *max_element(arr,arr+n);
        int high = 0;
        for(int i = 0;i<n;i++){
            high = high + arr[i];
        }
        int res = -1;
        if(n<k) return -1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(isValid(arr,n,k,mid)==true){
                res = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
