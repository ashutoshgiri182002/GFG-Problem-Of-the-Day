//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int minimumCost(vector<vector<int>>& flights, int n, int k) {
        // code here
        int m = flights.size();
       // vector<vector<pair<int,int>>>adj(n+1,vector<int>(2,0));
        
        vector<pair<int,int>>adj[n+1];
        
        for(int i = 0;i<m;i++){
            int u = flights[i][0];
            int v = flights[i][1];
            int c = flights[i][2];
            adj[u].push_back({v,c});
        }
        
        vector<int>dist(n+1,INT_MAX);
        dist[k] =0;
        queue<pair<int,int>>q;
        q.push({0,k});
        
        while(q.empty()==false){
            int dis = q.front().first;
            int node = q.front().second;
            q.pop();
            
            for(auto x: adj[node]){
                if(dist[x.first] > dis + x.second){
                    dist[x.first] = dis + x.second;
                    
                    q.push({dist[x.first],x.first});
                }
            }
        }
        
        int last = INT_MIN;
        for(int i =1;i<=n;i++){
            if(dist[i]==INT_MAX) return -1;
            if(dist[i]>last) last = dist[i];
        }
        
        return last;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int size;
        cin >> size;
        vector<vector<int>> flights(size,vector<int>(3));
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flights[i]=temp;
        }

        Solution ob;
        cout << ob.minimumCost(flights, n, k) << "\n";
    }
}

// } Driver Code Ends
