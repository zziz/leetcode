class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        
        if(prices.empty())  return profit;
        
        vector<int> diffs;
        for(int i = 0; i < prices.size() - 1; i++)
            diffs.push_back(prices[i + 1] - prices[i]);
        for(auto& it : diffs)
            if(it > 0)  profit += it;
        
        return profit;
    }
};