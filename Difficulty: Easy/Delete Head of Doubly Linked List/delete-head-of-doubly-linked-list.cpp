// User function Template for C++

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
Node *deleteHead(Node *head) {
    // Your code here
    Node* back =head;
    head=head->next;
    head->prev=nullptr;
    back->next=nullptr;
    
    free(back);
    return head;
}
