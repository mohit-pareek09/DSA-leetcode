/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        stack<int> s;
        Node* temp=head;
        while(temp){
            s.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            temp->data=s.top();
            s.pop();
            temp=temp->next;
        }
    
        return head;
    }
};