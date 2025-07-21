// User function template for C++
class Solution {
  public:
    string commonfn(string s1, string s2){
        string s="";
        int n=min(s1.length(),s2.length());
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                s+=s1[i];
            }
            else{return s;}
        }
        return s;
    }
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if(arr.size()==1){
            return arr[0];
        }
        string ans=commonfn(arr[0],arr[1]);
        
        for(int i=2;i<arr.size();i++){
            ans=commonfn(ans,arr[i]);
        }
        return ans;
    }
};