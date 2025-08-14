/*Linked list Node structure

struct Node
{
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
    
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        Node* temp=arr[0];
        for(int i=1;i<arr.size();i++){
            
            temp=sortedMerge(temp,arr[i]);
        }
        return temp;
    }
};