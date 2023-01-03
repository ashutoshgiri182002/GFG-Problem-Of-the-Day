class Solution {
  public:
    int removeStudents(int arr[], int n) {
        // code here
        
        vector<int>temp;
        temp.push_back(arr[0]);
        int len = 1;
        
        for(int i = 1;i<n;i++){
            if(arr[i]>temp[temp.size()-1]){
                temp.push_back(arr[i]);
                len++;
            }
            
            else{
                int it = lower_bound(temp.begin(),temp.end(),arr[i]) - temp.begin();
                temp[it] = arr[i];
            }
        }
        
        return n - temp.size();
    }
};
