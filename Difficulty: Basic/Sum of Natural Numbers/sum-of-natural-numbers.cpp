
class Solution {
  public:
    int f(int n){
        if(n==0){return 0;}
        return n+f(n-1);
    }
    int seriesSum(int n) {
        // code here
        return f(n);
    }
};
