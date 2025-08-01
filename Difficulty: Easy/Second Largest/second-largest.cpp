class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=arr[0];
        int secondLargest = -1 ;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>largest){
                secondLargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>secondLargest){
                secondLargest=arr[i];
            }
        }
        return secondLargest ;
    }
};