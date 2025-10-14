
// class Solution {
//   public:

//     vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
//         // code here
        
//     }
// };

class Solution {
public:
    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        int n = arr.size();
        vector<int> result(indices.size());
        
        // Precompute count of greater elements to right for each position
        vector<int> greaterCount(n, 0);
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[i]) {
                    greaterCount[i]++;
                }
            }
        }
        
        // Answer queries
        for (int i = 0; i < indices.size(); i++) {
            result[i] = greaterCount[indices[i]];
        }
        
        return result;
    }
};