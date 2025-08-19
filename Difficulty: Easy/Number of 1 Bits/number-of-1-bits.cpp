class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int cnt=0;
        while(n!=1){
            if(n%2!=0) cnt++;
            n=n/2;
        }
        return cnt+1;
    }
};