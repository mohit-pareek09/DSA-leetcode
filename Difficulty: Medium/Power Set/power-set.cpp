class Solution {
  public:
    vector<string> AllPossibleStrings(string s) {
        // Code here
        int subset =1<<s.length();
        vector<string> lst;
        for(int i=0;i<subset;i++){
            string str="";
            for(int j=0;j<s.length();j++ ){
                if(i & (1<<j)) str+=s[j];
            }
            
            lst.push_back(str);
        }
        sort(lst.begin(), lst.end());
        return lst;
    }
};