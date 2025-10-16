// class Solution {
//   public:
//     vector<int> asteroidCollision(int N, vector<int> &asteroids) {
//         // code here
        
//     }
// };




class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        stack<int> st;
        vector<int> result;
        
        for(int i = 0; i < N; i++) {
            int curr = asteroids[i];
            
            // If current asteroid is moving right or stack is empty, push it
            if(curr > 0 || st.empty()) {
                st.push(curr);
                continue;
            }
            
            // Current asteroid is moving left (negative)
            bool destroyed = false;
            
            while(!st.empty() && st.top() > 0) {
                int prev = st.top();
                
                // If previous asteroid is larger, current is destroyed
                if(prev > -curr) {
                    destroyed = true;
                    break;
                }
                // If previous asteroid is smaller, destroy it
                else if(prev < -curr) {
                    st.pop();
                }
                // If they are equal, both are destroyed
                else {
                    st.pop();
                    destroyed = true;
                    break;
                }
            }
            
            // If current asteroid wasn't destroyed, push it
            if(!destroyed) {
                st.push(curr);
            }
        }
        
        // Transfer remaining asteroids to result
        while(!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        
        // Reverse to maintain original order
        reverse(result.begin(), result.end());
        return result;
    }
};