class Solution {
  public:
    // Function to compute the LPS (Longest Prefix Suffix) array for KMP
    vector<int> computeLPS(string &pat) {
        int m = pat.length();
        vector<int> lps(m, 0);
        int len = 0; // Length of the previous longest prefix & suffix
        int i = 1;
        
        while (i < m) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }
    
    vector<int> search(string &txt, string &pat) {
        vector<int> result;
        int n = txt.length();
        int m = pat.length();
        
        // If pattern is empty, return empty result
        if (m == 0) return result;
        
        // Compute LPS array for the pattern
        vector<int> lps = computeLPS(pat);
        
        int i = 0; // Index for txt
        int j = 0; // Index for pat
        
        while (i < n) {
            if (txt[i] == pat[j]) {
                i++;
                j++;
            }
            if (j == m) {
                // Pattern found, add 0-based index to result
                result.push_back(i - j);
                j = lps[j - 1];
            } else if (i < n && txt[i] != pat[j]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        
        return result;
    }
};