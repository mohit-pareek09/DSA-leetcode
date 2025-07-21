class Solution {
  public:
    // string ror(string s){
    //     char temp=s[0];
    //     for(int i=1;i<s.length();i++){
    //         s[i-1]=s[i];
    //     }
    //     s[s.length()-1]=temp;
    //     return s;
    // }
    bool areRotations(string &s1, string &s2) {
    //     // code here
    //     string s=s1;
    //     for(int i=0;i<s1.length();i++){
    //         if(s2==s){return 1;}
    //         s=ror(s);
    //     }
        
    //     return 0;
    
        string concat = s1 + s1;
        return concat.find(s2) != string::npos;
        
    }
};