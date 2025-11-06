class Solution {
  public:
    char nonRepeatingChar(string &s) {
        vector<int> freq(26, 0);
        
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
        
       
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1)
                return s[i];
        }
      
        return '$';
    }
};
