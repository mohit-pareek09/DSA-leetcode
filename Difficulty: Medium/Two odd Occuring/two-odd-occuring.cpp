class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        // code here
        int Xor = 0;
        for(int i=0;i<arr.size();i++){
            Xor^=arr[i];
        }
        
        int num =(Xor&(Xor-1))^Xor;;
        int b1=0, b2=0;
        
        for(int i=0;i<arr.size();i++){
            if((num & arr[i])==0) b1^=arr[i];
            else b2^=arr[i];
        }
        
        vector<int> ans;
        if(b1 > b2) {
            ans.push_back(b1);
            ans.push_back(b2);
        } else {
            ans.push_back(b2);
            ans.push_back(b1);
        }
        
        return ans;
        
    }
};