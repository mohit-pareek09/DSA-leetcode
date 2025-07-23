class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
         if (s1.length() != s2.length()) return false;
        
        std::unordered_map<char, int> freq;
        
        // Count frequency of each character in s1
        for (char ch : s1) {
            freq[ch]++;
        }
        
        // Subtract frequency based on s2
        for (char ch : s2) {
            if (freq.find(ch) == freq.end() || freq[ch] == 0)
                return false; // Character not found or used up
            freq[ch]--;
        }
        
        // If all counts return to zero, the strings are anagrams
        return true;
        
    }
};