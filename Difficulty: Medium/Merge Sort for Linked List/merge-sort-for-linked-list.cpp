/*
The structure of linked list is the following

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
        Node* findMiddleNode(Node* head){
            Node* slow=head;
            Node* fast=head->next;
            
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
            
            return slow;
            
        } 
  
        Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* dummyNode=new Node(-1);
        Node* t1=head1;
        Node* t2=head2;
        Node* temp=dummyNode;
        
        while(t1!=NULL && t2!=NULL){
            if(t1->data< t2->data){
                 temp->next=t1;
                 temp=t1;
                 t1=t1->next;
                 
            }else{
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
        }
            if(t1) temp->next=t1;
            if(t2) temp->next=t2;
            
            return dummyNode->next;
    }
    // Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL || head->next==NULL) return head;
        Node* middle=findMiddleNode(head);
        
        Node* leftHead=head;
        Node* rightHead=middle->next;
        middle->next=nullptr;
        leftHead=mergeSort(leftHead);
        rightHead=mergeSort(rightHead);
        
        return sortedMerge(leftHead,rightHead);
        
    }
};