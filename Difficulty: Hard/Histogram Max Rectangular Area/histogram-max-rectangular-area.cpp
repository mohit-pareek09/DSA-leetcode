// class Solution {
//   public:
//     int getMaxArea(vector<int> &arr) {
//         // code here
        
//     }
// };




class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        int n = arr.size();
        stack<int> st;  // stores indices
        int maxArea = 0;
        
        for (int i = 0; i <= n; i++) {
            // Use n as a sentinel value (height = 0)
            int currHeight = (i == n) ? 0 : arr[i];
            
            // While stack is not empty and current bar is smaller than top of stack
            while (!st.empty() && currHeight < arr[st.top()]) {
                int height = arr[st.top()];
                st.pop();
                
                // Calculate width
                int width;
                if (st.empty()) {
                    width = i;  // bar extends to start
                } else {
                    width = i - st.top() - 1;  // between current and previous smaller bar
                }
                
                maxArea = max(maxArea, height * width);
            }
            
            st.push(i);
        }
        
        return maxArea;
    }
};