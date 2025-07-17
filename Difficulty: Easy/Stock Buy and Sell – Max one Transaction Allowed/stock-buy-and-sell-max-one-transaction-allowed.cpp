class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int minn=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            profit=max(profit,prices[i]-minn);
            minn=min(prices[i],minn);
        }
        
        return profit;
    }
};
