class Solution {
  public:
    int f(int n){
        if(n==0){return 1;}
        return n*f(n-1) ;
    }
    int factorial(int n) {
        return f(n);
        
    }
};