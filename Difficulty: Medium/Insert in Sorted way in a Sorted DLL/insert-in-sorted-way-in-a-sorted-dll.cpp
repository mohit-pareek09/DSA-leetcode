/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
     
        Node* newNode = new Node;
        newNode->next=NULL;
        newNode->prev=NULL;
        newNode->data =x;
        
        
        Node* temp =head;
        
        if(x <head->data){
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
            return head;
        }
        while(temp->next!=NULL || temp->data > x){
            if(temp->data > x){
                temp->prev->next=newNode;
                newNode->prev=temp->prev;
                newNode->next=temp;
                temp->prev=newNode;
                return head;
            }
            
            temp=temp->next;
            
        }
        temp->next=newNode;
        newNode->prev=temp;
        return head;
        
    }
};