class MyStack {
  private:
    int oper[1000]; 
    int top;
  public:
    MyStack() {
        top = -1;   
    }
    
    void push(int x) {
        // code here
        oper[++top]=x ;
        
    }

    int pop() {
        
        // code here
        if(top == -1) return -1;
        return oper[top--];
    }
};