class Solution {
  public:
    // Function to find the difference between the maximum and minimum frequency of
    // elements.
    int findDiff(vector<int>& arr) {
        // code here
        map<int,int> mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        int m=INT_MAX;
        int M=0;
        for(auto it:mpp){
            M=max(it.second,M);
            m=min(it.second,m);
            
        }
        return M-m ;
    }
};