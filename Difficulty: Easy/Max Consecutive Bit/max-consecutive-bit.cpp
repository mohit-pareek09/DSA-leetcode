class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int maxi=1;
        int count =1;
        int prev=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]==prev){
                count++;
                prev=arr[i];
                maxi=max(maxi,count);
            }
            else{
                count =1;
                prev=arr[i];
            }
        }
        return ((maxi));
        
    }
};