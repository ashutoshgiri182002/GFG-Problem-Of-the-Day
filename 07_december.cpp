class Solution {
  public:
  
    int ans = -1;
    int cnt = 0;
  
    void traverse(Node*root,int K){
        
        if(root==NULL)return;
    
        traverse(root->left,K);
        cnt++;
        if(cnt == K){
            ans = root->data;
        }
        traverse(root->right,K);
        
    }
  
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        
        traverse(root,K);
        
        return ans;
        
    }
};
