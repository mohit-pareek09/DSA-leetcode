class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        int ans = a^b;
        if(!ans) return 0;
        int cnt =0;
        for(int i=0; i<31 ;i++){
            if(ans & 1) cnt++;
            ans=ans>>1 ;
        }
        
        return cnt;
    }
};