/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node* temp=head;
        int count =1;
        while(temp!=NULL){
            if(count==x){
                break;
            }
            temp=temp->next;
            count++;
        }
        
        Node* back=temp->prev;
        Node* front=temp->next;
        
        if(front==NULL){
            back->next=nullptr;
            temp->prev=nullptr;
            free(temp);
            return head;
        }
        if(back==NULL){
            head=head->next;
            front->prev=nullptr;
            temp->next=nullptr;
            free(temp);
            return head;
        }
        
        back->next=front;
        front->prev=back;
        temp->next=nullptr;
        temp->prev=nullptr;
        free(temp);
        
        return head;
        
    }
};