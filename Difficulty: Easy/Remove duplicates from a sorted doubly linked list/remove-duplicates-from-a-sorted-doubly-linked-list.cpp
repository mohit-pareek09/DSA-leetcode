/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        Node* temp = head;
        while(temp && temp->next){
            Node* nextnode= temp->next;
            while(nextnode && nextnode->data == temp->data ){
                Node* duplicate =nextnode;
                nextnode=nextnode->next;
                delete duplicate;
                
            }
            
            temp->next=nextnode;
            if(nextnode) nextnode->prev=temp;
            temp=nextnode;
            
        }
        
        return head;
    }
};