/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        Node* temp=head;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        return count;
    }
};