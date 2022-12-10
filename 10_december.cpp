//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    //code here.
    int n = num.size();
  
    stack<char>st;
    st.push(num[0]);
   
   for(int i = 1;i<n;i++){
       while(!st.empty() and st.top() >num[i] and k > 0 ){
           st.pop();
           k--;
       }
       
       st.push(num[i]);
   }
   
   while( k > 0){
       st.pop();
       k--;
   }
   
   string ans = "";
   while(!st.empty()){
    //   ans = ans + st.top();
    ans.push_back(st.top());
       st.pop();
   }
   
   reverse(ans.begin(),ans.end());
   
   int cnt =0;
   
   for(int i = 0;i<ans.size();i++){
       if(ans[i]!='0')break;
       cnt++;
   }
   
   if(cnt==ans.length()) return "0";

   return ans.substr(cnt,ans.length());
    
}
