/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

   

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head==nullptr){
            Node* E_node=new Node(x);
            head=E_node;
            return head;
        }
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        
        Node* E_node=new Node(x);
        temp->next=E_node;;
        
        
        return head;
    }
};