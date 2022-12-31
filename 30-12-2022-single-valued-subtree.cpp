


class Solution
{
    public:
    
    int cnt = 0;
    
    bool check(Node*root,int x){
        
        if(root==NULL) return true;
        
        return root->data==x and (check(root->left,x) and check(root->right,x));
        
    }
    
    void preOrder(Node*root){
        
        if(root==NULL) return;
       
        
        if(check(root,root->data))cnt++;
        
        preOrder(root->left);
        preOrder(root->right);
        
    }
    
    int singlevalued(Node *root)
    {
        //code here
        preOrder(root);
        
        return cnt;
        
    }
    
};


