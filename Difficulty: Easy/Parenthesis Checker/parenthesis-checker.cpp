
class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);  }
                
            else{
                if(st.empty()) return false;
                if(s[i]==')' && st.top()=='(') st.pop();
                else if(s[i]=='}' && st.top()=='{') st.pop();
                else if(s[i]==']' && st.top()=='[') st.pop();
                else{return false;} 
                
                
            }
            
        }
    return st.empty();
    }
};