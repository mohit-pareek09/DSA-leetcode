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
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        map<Node*,int> mpp;
        Node* temp= head1;
        
        while(temp){
            mpp[temp]++;
            temp=temp->next;
        }
        temp=head2;
        while(temp){
            if(mpp.find(temp)!=mpp.end()) return temp;
            temp=temp->next;
        }
        
        return NULL;
        
    }
};