long long numOfWays(int N, int M)
{
    // write code here
    
    vector<int>x{1,2,2,1,-1,-2,-2,-1};
    vector<int>y{-2,-1,1,2,2,1,-1,-2};
    const int mod = 1000000007;
    long long  sum =0;
    long long sub =0;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
           int count =0;
           for(int k =0;k<8;k++){
               int p = i + y[k];
               int q = j + x[k];
               
               if(p>=0 and p < N and q>=0 and q<M){
                   count++;
               }
           }
           sub = sub + count;
        }
    }
    
    sum = (M*N *(long long)(M*N-1) - sub)%mod;
    
    return sum;
    
    
}
