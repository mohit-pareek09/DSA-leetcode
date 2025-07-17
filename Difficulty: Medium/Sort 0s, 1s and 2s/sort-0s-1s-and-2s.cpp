class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int one=0;
        int two =0;
        int zero =0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){zero++;}
                
            if(arr[i]==1){ one++;}
               
            if(arr[i]==2){ two++;}
               
        }
        
        for(int i=0;i<zero;i++){arr[i]=0;}
        for(int i=zero;i<one+zero;i++){arr[i]=1;}
        for(int i=zero+one;i<arr.size();i++){arr[i]=2;}
        
    }
 
};