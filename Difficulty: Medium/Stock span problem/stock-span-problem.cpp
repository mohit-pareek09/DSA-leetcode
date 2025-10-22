// class Solution {
//   public:
//     vector<int> calculateSpan(vector<int>& arr) {
//         // code here
        
//     }
// };


class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n, 1); // Initialize result with 1s (minimum span is 1)
        stack<int> st; // Stack to store indices of elements
        
        for (int i = 0; i < n; i++) {
            // Pop elements from stack while current price is >= stack top's price
            while (!st.empty() && arr[i] >= arr[st.top()]) {
                st.pop(); // Remove smaller or equal elements
            }
            // Span is the distance to the previous greater element (or start of array)
            result[i] = (st.empty()) ? i + 1 : i - st.top();
            st.push(i); // Push current index onto stack
        }
        
        return result;
    }
};