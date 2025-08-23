class Solution {
  public:
    double power(double b, int e) {
        // code here
        double ans =1;
        int m =e;
        if(e<0) e=e*(-1);
        while(e>0){
            
            if(e%2==1){
                ans=ans*b;
                e=e-1;
            }
            else{
                b=b*b;
                e=e/2;
            }
        }
        if(m<0) ans=1.0/ans;
        return ans;
    }
};