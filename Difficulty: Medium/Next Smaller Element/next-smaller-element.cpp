// class Solution {
//   public:
//     vector<int> nextSmallerEle(vector<int>& arr) {
//         //  code here
        
//     }
// };

class Solution {
public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1); // Default: -1 if no smaller element to the right
        stack<int> st; // To store elements (or indices)

        for (int i = n - 1; i >= 0; i--) {
            // Pop elements greater than or equal to current element
            while (!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }

            // If stack not empty, top is the next smaller element
            if (!st.empty()) {
                ans[i] = st.top();
            }

            // Push current element to stack
            st.push(arr[i]);
        }

        return ans;
    }
};
