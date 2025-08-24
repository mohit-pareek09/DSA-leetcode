class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        bool sign =true;
        if(dividend >=0 & divisor<0) sign=false;
        if(divisor>0 & dividend<= 0) sign=false;
        
        long n = abs((long)dividend);
        long d = abs((long)divisor);
        
        long ans=0;
        while(n>=d){
            int cnt=0;
            while(n>=(d<<(cnt+1))){
                cnt++;
            }
            
            ans += 1LL << cnt; // Use 1LL to ensure left shift is done with long
            n -= d * (1LL << cnt);
        }
        
        // Check for overflow before returning
        if (ans > INT_MAX && sign) return INT_MAX;
        if (ans > INT_MAX + 1LL && !sign) return INT_MIN;
        return sign? ans:-ans;
    }
};