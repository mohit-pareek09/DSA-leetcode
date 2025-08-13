// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        // code here
        vector<int> odd;
        vector<int> even;
        Node* temp=head;
        while(temp){
            if(temp->data % 2!= 0){
                odd.push_back(temp->data);
            }else{
                even.push_back(temp->data);
            }
            
            temp=temp->next;
        }
        
        temp=head;
       
        for(int i=0;i<even.size();i++){
                temp->data=even[i];
                temp=temp->next;
            }
        for(int i=0;i<odd.size();i++){
                temp->data=odd[i];
                temp=temp->next;
            }  
         return head;
    }
   
};