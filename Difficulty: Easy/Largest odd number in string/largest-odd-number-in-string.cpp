class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        if (s.empty()) return "";
        int i = s.length() - 1;
        while(i>=0){ 
            int num = s[i] - '0';
            if(num%2!=0){
                return s.substr(0,i+1);
            }
            i--;
        }
        
        return "";
    }
};