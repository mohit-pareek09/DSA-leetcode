// User function Template for C++
class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // Your code here
        map<int,int> mpp;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            if(mpp.find(target-arr[i])!=mpp.end()){
                v.push_back(target-arr[i]);
                v.push_back(arr[i]);
                return v;
            }
            else{
                mpp[arr[i]]=i;
            }
            
        }
        return v;
        
    }
};