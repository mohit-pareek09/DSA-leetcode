class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int low=0;
        int high =arr.size()-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]==k){
                int i=mid;
                while(arr[i]==k){
                    i--;
                }
                return i+1;
                
            }
            else if(arr[mid]<k){
                low=mid+1;
            }
            else{high=mid-1;}
            
        }
        return -1;
    }
};