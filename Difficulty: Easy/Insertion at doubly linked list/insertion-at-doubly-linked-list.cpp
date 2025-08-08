class Solution {
public:
    Node* addNode(Node* head, int p, int x) {
        // Create a new node with value x
        Node* newNode = new Node(x);
        
        // Case 1: Empty list
        if (head == nullptr) {
            if (p == 0) {
                return newNode; // Return new node as head if p == 0
            }
            delete newNode; // Invalid position, free memory
            return head;
        }
        
        // Traverse to the pth node
        Node* temp = head;
        int count = 0;
        while (temp != nullptr && count < p) {
            temp = temp->next;
            count++;
        }
        
        // Case 2: Position p is invalid (beyond list length)
        if (temp == nullptr) {
            delete newNode; // Free memory for the new node
            return head; // Return original head
        }
        
        // Case 3: Insert after the pth node
        // Connect newNode with the next node
        newNode->next = temp->next;
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        
        // Connect newNode with the pth node
        temp->next = newNode;
        newNode->prev = temp;
        
        return head;
    }
};