/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverseList(Node* head) {
    Node *prev = nullptr, *curr = head, *next = nullptr;
    
    while (curr != nullptr) {
        next = curr->next;  
        curr->next = prev;
        prev = curr;        
        curr = next;       
    }
    
    return prev; 
}
    
    Node* removezero(Node* head) {
        Node* temp=head->next;
        Node* prev=head;
        while(prev->data==0){
            delete prev;
            prev=temp;
            temp=temp->next;
            
        }
        return prev;
    }

    Node* addTwoLists(Node* head1, Node* head2) {
        head1=removezero(head1);
        head2=removezero(head2);
        
        head1 =reverseList(head1);
        head2 =reverseList(head2);
        
        Node* t1= head1;
        Node* t2= head2;
        Node* dummy=new Node(-1);
        Node* temp=dummy;
        int carry=0;
        
        while(t1 || t2){
            int sum=carry;
            if(t1) sum=sum+t1->data;
            if(t2) sum=sum+t2->data;
            carry=sum/10;
            Node* newNode=new Node(sum%10);
            
            temp->next=newNode;
            temp=temp->next;
            
            if(t1) t1=t1->next;
            if(t2) t2=t2->next;
        }
        
        if(carry){
            Node* newNode=new Node(carry);
            temp->next=newNode;
        }
        
        temp=dummy->next;
        delete dummy;
        reverseList(head1);
        reverseList(head2);
        temp=reverseList(temp);
        
        return temp;
        
        
        
    }
};