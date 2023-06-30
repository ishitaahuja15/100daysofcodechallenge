class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int CP = prices[0];
    int profit = 0;

    for (int i = 0; i < prices.size(); i++) 
    {
      if (CP > prices[i]) 
        {
          CP = prices[i];
        } 
      else if (CP < prices[i]) 
        {
          profit = max(prices[i]-CP, profit);

        }
    }

    return profit;
    }
};
      
    



  