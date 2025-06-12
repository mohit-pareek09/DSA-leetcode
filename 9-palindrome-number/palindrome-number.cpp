class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int num =x;
        long rev =0;
        while(x!=0){
            int lnum= x%10;
            rev = 10*rev+lnum;
            x=x/10;

        }
        return (rev==num?true:false);
    }
};