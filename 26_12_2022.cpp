class Solution{
public:
    void precompute()
    {
        // Code Here
    }
    
    long long solve(long long l, long long r){
        // Code Here
        long long count=0;
        for(int i=0;i<63;i++){
            for(int j=i+1;j<63;j++){
                for(int k=j+1;k<63;k++){
                    long long temp=pow(2,i)+pow(2,j)+pow(2,k);
                    if(temp>=l && temp<=r)
                    count++;
                }
            }
        }
        return count;
    }
};
