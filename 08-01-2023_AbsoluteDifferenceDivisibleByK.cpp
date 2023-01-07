class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        
        map<int,int>mp;
        for(int i = 0;i<n;i++){
            arr[i] = arr[i]%k;
            mp[arr[i]]++;
        }
        
        int sum = 0;
        
        for(auto x:mp){
            sum = sum + (x.second)*(x.second-1)/2;
        }
        
        return sum;
    }
};
