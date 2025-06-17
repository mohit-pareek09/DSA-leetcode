class Solution {
  public:
    int print(int N,int i){
        if(i>N){return 0;}
        cout<<"GFG ";
        print(N,i+1);
    }
    void printGfg(int N) {
        // Code here
        int i=1;
        print(N,i);
        
    }
};
