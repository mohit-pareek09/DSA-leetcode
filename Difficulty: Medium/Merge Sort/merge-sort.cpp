class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l==r){return ;}
        int mid = (l+r)/2;
        mergeSort( arr,l, mid);
        mergeSort( arr, mid+1, r);
        merge(arr,l, mid,  r);
        
        
    }
    
    void merge(vector<int>& arr, int l, int mid, int r){
        vector<int> temp;
        int left =l;
        int right =mid+1 ;
        
        while(left<=mid && right<=r){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
                
            }
        }
        
        while(left<=mid){
            temp.push_back(arr[left]);
                left++;
        }
        while(right<=r){
            temp.push_back(arr[right]);
                right++;
        }
        
        for(int i=l;i<=r;i++){
            arr[i]=temp[i-l];
        }
    }
    
};