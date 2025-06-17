class Solution {
  public:
    int print(int n,int i){
        if(i>n){return 0 ;}
        print(n,i+1);
        cout<<i<<" ";
    }
    void printNos(int N) {
        // code here
        int i=1;
        print(N,i);
    }
};