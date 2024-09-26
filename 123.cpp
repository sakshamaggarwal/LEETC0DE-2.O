// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/solutions/3606344/optimized-o-n-o-n-solution-dp-c/
// Best Time to Buy and Sell Stock III

class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        
        int dp[prices.size() + 1][5];  
        
        for(int i = (int) prices.size();i >= 0;--i){
            
            for(int transactionsLeft = 0;transactionsLeft <= 4;transactionsLeft++){     // buy sell buy sell = 4
                
                int &ans = dp[i][transactionsLeft];
                if(i == prices.size()){
                    ans = 0;
                }else if(transactionsLeft == 0){
                    ans = 0;
                }else{
                    
                    // choice 1
                    // no transaction today
                    int ans1 = dp[i + 1][transactionsLeft];
                    
                    // choice 2
                    // doing the possible transaction today     
                    int ans2 = 0;
                    bool buy = (transactionsLeft % 2 == 0);

                    if(buy == true){ // buy
                        ans2 = -prices[i] + dp[i + 1][transactionsLeft - 1];
                    }else{ // sell
                        ans2 = prices[i] + dp[i + 1][transactionsLeft - 1];
                    }
                    ans = max(ans1, ans2);
                }
            }
        }
        return dp[0][4];
        
    }
};
