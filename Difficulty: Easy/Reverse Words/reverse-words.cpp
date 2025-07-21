class Solution {
  public:
    string reverseWords(string &s) {
        // code here
    string temp="";
    string ans="";
    char ch;
    
    //Iterate the string and keep on adding to form a word
    //If empty space is encountered then add the current word to the result
    for(int i=0;i<s.length();i++){
        ch=s[i];
        if(ch=='.' && temp=="" && ans==""){
            continue;
        }
        else if(ch!='.'){
            temp+=ch;
        }
        else if(ch=='.' && temp!="" && ans==""){
            ans=temp;
            temp="";
        }
        else if(ch=='.' && temp!=""){
            ans=temp+"."+ans;
            temp="";
        }
    }
    
    if(!temp.empty() && ans!=""){
        ans=temp+"."+ans;
    }
    if(!temp.empty() && ans==""){
        ans=temp;
    }
    
   return ans; 
}};