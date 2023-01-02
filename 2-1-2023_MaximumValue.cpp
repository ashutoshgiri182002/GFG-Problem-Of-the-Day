class Solution {
  public:
    vector<int> maximumValue(Node* root) {
        //code here
        
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        
        vector<int>ans;
        vector<int>temp;
        
        while(!q.empty()){
           
           Node*node = q.front();
           if(node==NULL){
               q.pop();
               if(!q.empty()){
                   ans.push_back(*max_element(temp.begin(),temp.end()));
                   q.push(NULL);
                   temp.clear();
               }
           }
           
           else{
               q.pop();
               temp.push_back(node->data);
               if(node->left) q.push(node->left);
               if(node->right) q.push(node->right);
           }
            
        }
        
        ans.push_back(*max_element(temp.begin(),temp.end()));
     
        return ans;
    }
};
