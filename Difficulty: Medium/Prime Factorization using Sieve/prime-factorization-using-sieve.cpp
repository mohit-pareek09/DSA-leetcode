// User function Template for C++

class Solution {
  public:
    void sieve() {}
    vector<int> Vprime(int n){
        vector<int> ans(n + 1, 0);
        for(int i = 2; i <= n; i++){
            ans[i]=i;
        }
        for(int i = 2; i * i <= n; i++){
            if(ans[i]==i){
                for(int j=i*i;j<=n;j+=i){
                    if ( ans[j] == j) { 
                         ans[j]= i; 
                    }
                   
                }
            }
        }
        return ans;
    } 

    vector<int> findPrimeFactors(int N) {

        vector<int> prime=Vprime(N);
        vector<int> ans;
        while(N!=1){
            ans.push_back(prime[N]);
            N=N/prime[N];
            
        }
        
        return ans;
        
    }
};

