class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size(),a=INT_MAX,ans=0;
        for(int i:prices)
        {
            if(i<a)
                a=i;
            else if(i-a>ans)
                ans=i-a;
        }
        return ans;
    }
};
