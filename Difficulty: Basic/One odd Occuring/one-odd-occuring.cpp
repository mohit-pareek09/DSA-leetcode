class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int xor1=arr[0];
        for(int i=1;i<arr.size();i++){
            xor1=xor1^arr[i];
        }
        return xor1;
    }
};