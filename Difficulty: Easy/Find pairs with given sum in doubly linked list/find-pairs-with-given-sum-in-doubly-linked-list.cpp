// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    Node* findtail(Node* head){
        Node* temp= head;
        while(temp->next){
            temp=temp->next;
        }
        return temp;
    }
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        Node* left= head;
        Node* right= findtail(head);
        vector<pair<int, int>> v;
        
        while(right->data > left->data){
            int sum = right->data +left->data;
            if(sum>target) right=right->prev;
            else if(sum<target) left=left->next;
            else{
                v.push_back({left->data, right->data});
                right=right->prev;
                left=left->next;
            }
            
            
        }
        
        return v;
    }
};