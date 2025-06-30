class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxx=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxx=max(maxx,arr[i]);
        }
        return maxx;
    }
};
