class Solution {
  public:
    
    int decToBinary(int n)
{    
    int cnt = 0;
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cnt++;
    }
    
    return cnt;
}
  
  
    int minVal(int a, int b) {
        // code here
        
        int ac = decToBinary(a);
        int bc = decToBinary(b);
       // cout<<bc<<" "<<ac<<endl;
        if(ac==bc) return a;
        
        int diff = abs(ac - bc);
        
        if(bc < ac){
            
            while(diff > 0){
                
                a = a&(a-1);
                
                diff--;
            }
            
        }
        
        else{
            
            while(diff>0){
                a = a|(a+1);
                diff--;
            }
        }
            
            return a;
    }
};
