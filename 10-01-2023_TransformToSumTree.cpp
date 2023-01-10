class Solution {
  public:
  
    int helper(Node*root){
        
        if(root==NULL){
            return 0;
        }
        
        int v = root->data;
        
        root->data =  helper(root->left)+ helper(root->right);
        
       return root->data + v;
        
       
    }
  
    void toSumTree(Node *node)
    {
        
        helper(node);
    }
};
