class Solution {
  private:
    stack<int> st;
    int min;
    
  public:
    Solution() {
        // code here
        min=INT_MAX;
        
    }

    // Add an element to the top of Stack
    void push(int x) {
        
        // code here
        if(st.empty()){
            st.push(x);
            min=x;
        }
        else{
            if(x>min) st.push(x);
            else{
                st.push(2*x-min);
                min=x;
            }
        }
    }

    // Remove the top element from the Stack
        
    void pop() {
        // code here
        if(st.empty()) return;
        int num=st.top();
        st.pop();
        
        if(num<min) min=2*min-num;
        
        
        
    }

        
    // Returns top element of the Stack
    int peek() {
        // code here
        if(st.empty()) return -1;
        int num=st.top();
        if(min<num) return num;
        
        return min;
    }
        

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if (st.empty()) return -1;
        return min;
    }
};