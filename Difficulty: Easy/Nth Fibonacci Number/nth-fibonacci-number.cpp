// User function Template for C++
class Solution {
  public:
  int f(int n){
      if(1>=n){
          return n;
      }
      return f(n-1)+f(n-2);
  }
    int nthFibonacci(int n) {
        // code here
        return f(n);
        
    }
};