class Solution {
  public:
    string removeKdig(string &s, int k) {
        // code here
        string st;
        int n = s.length();
        
        if(k==n) return "0";
        
        for(int i=0 ;i< n; i++){
            while( !st.empty() && k>0 && (st.back()-'0')>(s[i]-'0')){ 
                st.pop_back();
                k--;
                
            }
            
            st.push_back(s[i]);
        }
        
        while( !st.empty() && k>0){
            st.pop_back();
            k--;
        }
        
        if(st.empty()) return "0";
        
        
        // Remove leading zeros
        int start = 0;
        while (start < st.length() && st[start] == '0') {
            start++;
        }
        
        // If all characters are removed or only zeros remain
        if (start == st.length()) return "0";
        
        // Return substring starting from first non-zero digit
        return st.substr(start);
        
        
    }
};