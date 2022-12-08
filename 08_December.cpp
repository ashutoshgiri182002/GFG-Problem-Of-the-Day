
class Solution
{
public:

  bool checkprime(int n){

    if(n==1) return false;
    int sq = sqrt(n);

    for(int i=2; i<=sq; i++){
        if(n%i==0) return false;
    }

  return true;
}

    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
        vector<int>ans;
       for(int i = 0;i<q;i++){
           long long n = query[i];
           int cnt = 0;
          for(int j= 1;j*j<=n;j++){
              if(checkprime(j)){
                  cnt++;
              }
          }
          
          ans.push_back(cnt);
           
       }
        
        return ans;
        
    }
};

