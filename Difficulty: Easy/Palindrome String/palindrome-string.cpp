class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool f(int i, string &s){
        int n=s.size();
        if(i>=n/2){return true;}
        if(s[i]!=s[n-i-1]){return false ;}
        return  f(i+1,s);
    }
    bool isPalindrome(string& s) {
        // code here
        return f(0,s);
        
    }
};