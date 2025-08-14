/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        
        Node* fast=head;
        int cnt=0;
        for(int i=0; i<k && fast!=NULL ;i++){
            fast=fast->next;
            cnt++;
        }
        if(cnt<k) return -1;
        if(fast==NULL) return head->data;
        Node* slow=head;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        // Node* temp = slow->next;
        // slow->next=slow->next->next;
        // temp->next=NULL;
        // free(temp);
        
        return slow->next->data;
    }
};