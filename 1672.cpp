class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int ans=0,a=accounts.size(),b=accounts[0].size();
        for(int i=0;i<a;i++)
        {
            int sum=0;
            for(int j=0;j<b;j++)
            {
                sum+=accounts[i][j];
            }
            ans=max(sum,ans);
        }
        return ans;
    }
};
