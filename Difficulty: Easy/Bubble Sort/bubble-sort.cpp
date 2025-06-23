class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code her
        int n=arr.size();
        for(int i=n-1;i>0;i--){
            int swapa=0;
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);}
                swapa=1;
            }
            if(swapa==0){break;}
            
        }
        
    }
};