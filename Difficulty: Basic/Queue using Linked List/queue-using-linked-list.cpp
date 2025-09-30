class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
Node* start;
Node* end;
int qSize=0;

  public:
    myQueue() {
        // Initialize your data members
        start=NULL; 
        end=NULL; 
        qSize =0;
    }

    bool isEmpty() {
        // check if the queue is empty
        return (qSize==0);
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        Node* temp =new Node(x);
        if(isEmpty()){
            start =temp;
            end =temp;
        }else{
            end->next = temp;
            end=temp;
        }
        qSize++;
    }

    void dequeue() {
        // Removes the front element of the queue
        Node* temp =start;
        start=start->next;
        delete temp;
        qSize--;
        if(start ==NULL) end =NULL;
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(isEmpty()) return -1;
        return start->data;
    }

    int size() {
        // Returns the current size of the queue.
        return qSize;
    }
};
