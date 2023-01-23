class Solution {
  public:
    string removePair(string s) {
        // code here
        stack<int>st;
        
        for(int i = 0;i<s.size();i++){
            
        if(!st.empty() and st.top()==s[i]) st.pop();
            
        else  st.push(s[i]);
            
        }
        
        string ans = "";
        
        if(!st.empty()){
             while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
        }
      
        return "-1";
        
    }
};
