class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int i=0;
        for(int j=1;j<arr.size();j++){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
                }
        }
        return ++i;
    }
};