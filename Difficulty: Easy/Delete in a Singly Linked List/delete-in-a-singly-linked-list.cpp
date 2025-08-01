/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head== nullptr) return head;
        
        if(x==1){
            Node* temp=head;
            head=head->next;
            free(temp);
            return head;
        }
        
        int count=1;
        Node* temp=head;
        Node* prev=nullptr;
        
        while(temp!=nullptr){
            
            if(count ==x){
                prev->next=temp->next;
                free(temp);
                return head;
            }
            
            count++;
            prev=temp;
            temp=temp->next;
            
            
        }
        
        return head;
    }
};