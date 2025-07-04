// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int j;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                j=i;
                break;
            }
        }
        
        for(int i=j+1;i<n;i++){
            if(arr[i]!=0){
                swap(arr[j],arr[i]);
                j++;
            }
        }
        
        
        
    }
};