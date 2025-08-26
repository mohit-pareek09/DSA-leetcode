class Solution {
  public:
    vector<int> Vprime(int n){
        vector<int> ans(n + 1, 1);
        for(int i=2;i*i<=n;i++){
            if(ans[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    ans[j]=0;
                }
            }
        }
        return ans;
    } 
    vector<int> sieve(int n) {
        // code here
        vector<int> prime=Vprime(n);
        vector<int> ans;
        for(int i=2;i<=n;i++){
            if(prime[i]==1) ans.push_back(i);
        }
        
        return ans;
        
    }
};