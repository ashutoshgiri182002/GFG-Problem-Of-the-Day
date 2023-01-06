class Solution{   
  public:
  
   bool checkPrime(int n){
       
       for(int i = 2;i*i<=n;i++){
           if(n%i==0) return false;
       }
       
       return true;
   }
   
   
   vector<int>storDg(int n){
       
       vector<int>dg;
       while(n>0){
           int rem = n%10;
           dg.push_back(rem);
           n = n/10;
       }
       
       return dg;
   }
   
   
   bool check(int x, int y){
       
       vector<int>v1 = storDg(x);
       vector<int>v2 = storDg(y);
       
       int c = 0;
       for(int i = 0;i<4;i++){
           if(v1[i]!=v2[i])c++;
       }
       
       return c==1;
   }
   
  
    int shortestPath(int Num1,int Num2)
    {   
        // Complete this function using prime vector
        
        int count = 0;
        int prev = Num1;
        
        for(int i = Num1+1;i<= Num2;i++){
            
            if(checkPrime(i) and check(prev,i) and i>prev){
                count++;
                cout<<i<<endl;
                prev = i;
            }
        }
        
        return count;
        
    }
};
