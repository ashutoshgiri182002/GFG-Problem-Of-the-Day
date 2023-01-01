class Solution{
	public:
	int compute_value(int n)
	{
	    // Code here
	    long long ncr = 1;
        long long sum = 1;
        long long m = 1000000007;
    
        for(int i=1; i<=n; i++){
    
            ncr = ((n+1-i) *ncr)/i;
            sum = sum + (ncr*ncr);
            
            sum = sum;
        }
        
      return sum;

	}
};
