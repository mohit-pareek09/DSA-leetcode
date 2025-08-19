class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        if((n>>k)%2) return true;
        else return false;
    }
};