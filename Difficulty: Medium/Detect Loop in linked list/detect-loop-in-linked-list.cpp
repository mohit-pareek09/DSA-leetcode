/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
} */
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // code here
        map<Node*,int>mpp;
        Node* temp=head;
        while(temp){
            if( mpp.find(temp)!= mpp.end() ){
                return true;
            }
            
            mpp[temp]=1;
            temp=temp->next;
        }
        return false;
    }
};