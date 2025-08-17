// User function Template for C++

void toBinary(int n) {
    // your code here
    string ans="";
    while(n!=1){
        int num=n%2;
        ans=ans+to_string(num);
        n=n/2;
    }
    ans=ans+'1';
    reverse(ans.begin(), ans.end());
    cout<<ans;
}