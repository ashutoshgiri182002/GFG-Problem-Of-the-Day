class Solution{
    public:

    int carpetBox(int A, int B, int C, int D){
        //code here
        
        if(A<=C and B<=D or A<=D and B<=C) return 0;
        
       if(A>C and A>D){
  
         return 1 + carpetBox(A/2,B,C,D);
       }
       
       if(B>C and B>D){
        
          return 1 + carpetBox(A,B/2,C,D);
       }
       
       
        return min(1+carpetBox(A/2,B,C,D) , 1+carpetBox(A,B/2,C,D));
    }
};
