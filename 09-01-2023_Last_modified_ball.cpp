class Solution {
  public:
    int solve(int N, vector<int> A) {
        // code here
        
        int i = N-1;
        while(i>=0 and A[i]==9){
            i--;
        }
        
        return i+1;
    }
};
