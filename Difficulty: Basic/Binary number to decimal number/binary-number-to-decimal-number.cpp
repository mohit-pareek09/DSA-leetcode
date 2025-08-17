class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int sum=0;
        int p=1;
        for(int i=b.length()-1; i >=0 ;i--){
            int num=b[i]-'0';
            sum=sum+num*p;
            p=p*2;
        }
        
        return sum;
    }
};