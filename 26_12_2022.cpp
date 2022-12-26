
class Solution{
public:
    
typedef long long ll;

    void precompute()
    {
        // Code Here
    }
    
    long long solve(long long l, long long r){
        // Code Here
        ll ans=0;
        for(int i=0;i<63;i++)
        {
            for(int j=i+1;j<63;j++)
            {
                for(int k=j+1;k<63;k++)
                {
                    long long num=0;
                    num|=(1L<<i);
                    num|=(1L<<j);
                    num|=(1L<<k);
                    
                    if(num>=l and num<=r)
                        ans++;
                }
            }
        }
        return ans;
    }
    
};



