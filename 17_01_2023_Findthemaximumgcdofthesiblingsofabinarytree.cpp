/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


class Solution
{
public:
     
     int ans = 0;
     int maxi = -1;
    int maxGCD( Node* root)
    {
        //code here
        
        if(root==NULL) return 0;
        
        int g = 0;
        if(root->left and root->right){
            int g = __gcd(root->right->data,root->left->data);
            
            if(maxi<=g){
                maxi = g;
                ans = root->data;
            }
        }
        
        maxGCD(root->right);
        maxGCD(root->left);
        
        
        return ans;
        
    }
};
