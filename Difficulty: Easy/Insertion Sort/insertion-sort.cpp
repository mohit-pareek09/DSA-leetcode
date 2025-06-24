class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            int j=i;
            for(j>0;arr[j-1]>arr[j];j--){
                swap(arr[j-1],arr[j]);
            }
        }
        
    }
};