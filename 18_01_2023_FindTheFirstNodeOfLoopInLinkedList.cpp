/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        Node*slow = head;
        Node*fast = head;
        
        while(slow->next!=NULL and fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast==slow) break;
        }
        
        if(fast!=slow)return -1;
        
        slow = head;
        
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow->data;
        
    }
};
