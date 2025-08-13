/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node* reverse(Node* head){
        Node* prev=NULL;
        Node* temp=head;
        
        while(temp){
            Node* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
            
        }
        return prev;
    }
    bool isPalindrome(Node *head) {
        //  code here
        if(head==NULL || head->next==NULL) return true;
        Node* slow =head;
        Node* fast =head;
        while(fast->next !=NULL && fast->next->next!=NULL){
            
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* NewHead= reverse(slow->next);
        Node* first= head;
        Node* second=NewHead;
        
        while(second){
            if(first->data != second->data){
                reverse(NewHead);
                return false;
            }
            second=second->next;
            first=first->next;
        }
        reverse(NewHead);
        return true;
        
    }
};