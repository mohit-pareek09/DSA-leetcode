class Solution {
  public:
    int toggleBits(int n, int l, int r) {
        // code here
        l--;
        r--;
        int num=l;
        while(num<r+1){
            n=(n^(1<<num));
            num++;
        }
        
        return n;
    }
};