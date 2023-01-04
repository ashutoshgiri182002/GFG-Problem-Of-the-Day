// User function Template for C++
class Solution {
  public:
    int dp[10001]; 

    int solve(int i, vector<vector<int>>&in){

        if (i == in.size())

            return 0; 

        

        if (dp[i] != -1)

            return dp[i]; 

        

        int low = i + 1, high = in.size() - 1;

        int next_jump = in.size(); 

        while (low <= high){

            int mid = (low + high) >> 1; 

            if (in[mid][0] >= in[i][1]){

                next_jump = mid; 

                high = mid - 1; 

            }

            else

                low = mid + 1; 

        }

        int op1 = in[i][2] + solve(next_jump, in); 

        int op2  = solve(i + 1, in); 

        

        return dp[i] = max(op1, op2); 

    }

    

    int maximum_profit(int n, vector<vector<int>> &intervals) {

        sort(intervals.begin(), intervals.end()); 

        memset(dp, -1, sizeof(dp)); 

        return solve(0, intervals); 

    }


};
