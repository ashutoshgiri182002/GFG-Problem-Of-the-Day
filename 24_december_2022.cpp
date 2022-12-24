//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  long long int wineSelling(vector<int>& arr, int N){
      //Code here.
      vector<pair<int,int>>pos;
      vector<pair<int,int>>neg;
      
      for(int i = 0;i<arr.size();i++){
          if(arr[i]>=0)pos.push_back({arr[i],i});
          
          else if(arr[i]<0)neg.push_back({arr[i],i});
      }
      
      long long int sum = 0;
      int n = pos.size();
      int m = neg.size();
     
      int i =0;
      int j = 0;
      
      while(i<n or j<m){
          
          if(pos[i].first >= abs(neg[j].first)){
              sum = sum + (abs(neg[j].first) * abs(pos[i].second - neg[j].second));
              pos[i].first = pos[i].first - abs(neg[j].first);
              j++;
          }
          
          else if(pos[i].first < abs(neg[j].first)){
              sum = sum + (pos[i].first) * abs(pos[i].second - neg[j].second);
              neg[j].first = pos[i].first + neg[j].first;
              i++;
          }
          
        }
      
      return sum;
  }
};



//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        long long int ans = ob.wineSelling(arr,n);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends
