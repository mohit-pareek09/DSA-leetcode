class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int xor1=0,xor2=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            xor1=xor1^arr[i];
            xor2=xor2^(i+1);
        }
        
        xor2=xor2^n+1;
        return xor1^xor2;
    }
};