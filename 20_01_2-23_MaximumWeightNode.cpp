//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      vector<int> arr(N,0);
      for(int i=0;i<N;i++){
          if(Edge[i]!=-1){
              arr[Edge[i]]+=i;
          }
      }
      int ans = max_element(arr.begin(),arr.end())-arr.begin();
      return ans;
  }
};
