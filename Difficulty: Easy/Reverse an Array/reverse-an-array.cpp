class Solution {
  public:
    void f(int i,int n, vector<int> &arr ){
        if(i >= n/2){return;}
        swap(arr[i],arr[n-i-1]);
        f(i+1,n,arr);
    }
    void reverseArray(vector<int> &arr) {
        // code here
        f(0,arr.size(),arr);
        
    }
};