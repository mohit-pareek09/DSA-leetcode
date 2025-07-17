class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int left=0;
        int right=arr.size()-1;
        sort(arr.begin(), arr.end());
        while(left<right){
            if(arr[left]+arr[right]==target){
                return true;
            }
            else{
                if(arr[left]+arr[right]>target){right--;}
                else{left++;}
            }
                
        }
        return false;
    }
};