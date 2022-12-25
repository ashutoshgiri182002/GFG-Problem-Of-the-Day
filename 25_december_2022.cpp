

class Solution {
public:
    long long int MissingNo(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size(),ri,ci;
        vector<long long> r(n,0),c(n,0);
        long long d1=0,d2=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                r[i]+=matrix[i][j];
                c[i]+=matrix[j][i];
                if(j==i) {
                    d1+=matrix[i][j];
                }
                if(j==n-i-1) {
                    d2+=matrix[i][j];
                }
                if(matrix[i][j]==0) {
                    ri=i;
                    ci=j;
                }
            }
        }
        
        long long sum1=r[(ri+1<n?ri+1:ri-1)],sum2=r[ri];
        if((sum2>=sum1) || (d1!=(ci==ri?sum2:sum1)) || (d2!=(ci==n-ri-1?sum2:sum1))){
            return -1;
        }
        for(int i=0;i<n;i++) {
            if((i!=ri && r[i]!=sum1) || (i!=ci && c[i]!=sum1) || (i==ci && c[i]!=sum2)){
                return -1;
            }
        }
        return sum1-sum2;
    }
};


