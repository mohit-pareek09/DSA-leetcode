// class Solution {
//   public:
//     int sumSubMins(vector<int> &arr) {
//         // code here
        
//     }
// };


class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        const int MOD = 1e9 + 7;
        int n = arr.size();
        vector<long long> left(n), right(n);
        stack<pair<int, int>> st; // Stack to store {value, index}
        
        // Calculate left boundaries (count of elements where arr[i] <= previous elements)
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[i] <= st.top().first) {
                st.pop(); // Pop elements greater than or equal to arr[i]
            }
            left[i] = st.empty() ? i + 1 : i - st.top().second;
            st.push({arr[i], i});
        }
        
        // Clear stack for right boundaries
        while (!st.empty()) st.pop();
        
        // Calculate right boundaries (count of elements where arr[i] < next elements)
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[i] < st.top().first) {
                st.pop(); // Pop elements strictly greater than arr[i]
            }
            right[i] = st.empty() ? n - i : st.top().second - i;
            st.push({arr[i], i});
        }
        
        // Calculate sum of contributions
        long long result = 0;
        for (int i = 0; i < n; i++) {
            result = (result + (long long)arr[i] * left[i] * right[i]) % MOD;
        }
        
        return result;
    }
};