// User function Template for C++

class Solution {
  public:
    long long solve(int n) {
        int count = 3;
        long long res = n;
        for(long long i = n - 1; i > 0 && count > 0; i--){
            if(__gcd(res, i) == 1) {
                res *= i;
                count--;
            }
        }
        return res;
    }

    long long maxGcd(int n) {
       return max(solve(n), solve(n - 1));
    }
};
