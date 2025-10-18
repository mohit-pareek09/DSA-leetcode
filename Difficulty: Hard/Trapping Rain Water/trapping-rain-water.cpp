class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        if (n < 3) return 0;
        
        vector<int> preMax(n);
        vector<int> postMax(n);
        
        preMax[0] = arr[0];
        for (int i = 1; i < n; i++) {
            preMax[i] = max(preMax[i-1], arr[i]);
        }
        
    
        postMax[n-1] = arr[n-1];
        for (int i = n-2; i >= 0; i--) {
            postMax[i] = max(postMax[i+1], arr[i]);
        }
        
        int total =0 ;
        for(int i=0; i<n; i++ ){
            if(arr[i]<preMax[i] && arr[i]<postMax[i]){
                
                int water = (min(preMax[i] ,postMax[i])) - arr[i];
                
                if (water > 0) {
                total += water;}
          
            }
        }
        
        return total;
        
    }
};