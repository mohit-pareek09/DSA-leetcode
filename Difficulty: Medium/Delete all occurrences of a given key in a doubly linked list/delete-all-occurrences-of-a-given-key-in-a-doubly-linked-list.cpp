// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        Node* head =*head_ref;
        Node* temp =head;
        while(temp){
            if(temp->data == x){
                    if(temp==head){
                        head=head->next;
                        *head_ref =head;
                        }
                    Node* back=temp->prev;
                    Node* front=temp->next;
                    
                    if(back) back->next=front;
                    if(front) front->prev=back;
                    
                    delete temp;
                    temp=front;
                    
            }
            else temp=temp->next;
         
        }
        
    }
};