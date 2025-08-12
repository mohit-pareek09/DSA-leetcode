/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // Code here
        unordered_map<Node*, int>mpp;
        Node* temp=head;
        int count=1;
        while(temp){
            if(mpp.find(temp)!=mpp.end()){
                return count-mpp[temp];
            }
            mpp[temp]=count;
            count++;
            temp=temp->next;
        }
        return NULL;
    }
};