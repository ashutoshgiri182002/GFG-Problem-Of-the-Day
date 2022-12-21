/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution{
    
public:
    Node* sortList(Node* head)
    {
        // Your Code Here
        if(head == NULL || head->next == NULL)
        return head;
        Node* curr = head;
        Node* temp;
        while(curr->next != NULL)
        {
            if(curr->next->data < 0)
            {
                temp = curr->next;
                curr->next = curr->next->next;
                temp->next = head;
                head = temp;
            }
            else
            curr = curr->next;
        }
        return head;
    }
};
