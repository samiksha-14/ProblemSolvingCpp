class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_min=prices[0];
        int res=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<curr_min) curr_min=prices[i];
            int profit=prices[i]-curr_min;
            res=max(profit,res);
        }
        return res;
    }
};