class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();

        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));

        dp[0][0]=0;
        for(int i=1;i<n1+1;++i)
        {
            dp[i][0]=s1[i-1]+dp[i-1][0];
        }
        for(int j=1;j<n2+1;++j)
        {
            dp[0][j]=s2[j-1]+dp[0][j-1];
        }
        
        for(int i=1;i<n1+1;++i)
        {
            for(int j=1;j<n2+1;++j)
            {
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=min(dp[i-1][j]+s1[i-1],dp[i][j-1]+s2[j-1]);
            }
        }
        // for(int i=0;i<n1+1;i++)
        // {
        //     for(int j=0;j<n2+1;++j)
        //         cout<<dp[i][j]<<"  "<<"  ";
        //     cout<<endl;
        // } 
        return dp[n1][n2];
    }
};
