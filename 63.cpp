class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));

        // for(int i=0;i<n;++i)
        // {
        //     dp[i][0]=1;
        // }
        // for(int j=0;j<m;++j)
        //     dp[0][j]=1;
        //dp[0][1]=1;
        dp[1][0]=1;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(!obstacleGrid[i][j])
                    dp[i+1][j+1]=dp[i][j+1]+dp[i+1][j];
            }
        }
        return dp[n][m];
    }
};

/*

    0 0 0   
    0 1 0
    0 0 0
    
    0 0 0 0
    1 0 0 0
    0 0 0 0
    0 0 0 0
*/
