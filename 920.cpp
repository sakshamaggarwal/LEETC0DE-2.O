class Solution {
public:
    int numMusicPlaylists(int n, int goal, int k) {
        const int MOD=1e9+7;
        vector<vector<long>> dp(goal+1,vector<long>(n+1,0));
        dp[0][0]=1;

        for(int i=1;i<=goal;++i)
        {
            for(int j=1;j<=n;++j)
            {
                dp[i][j]=dp[i-1][j-1]*(n-j+1)%MOD;
                if(j>k)
                    dp[i][j]=(dp[i][j]+dp[i-1][j]*(j-k))%MOD;
                   // OR : dp[i][j]=(dp[i][j]+dp[i-1][j]*(n-j+1))%MOD; works

            }
        }
        return dp[goal][n];
    }
};

/*  
    k=1
    n=3
            j1 j2 j3    j: num of songs  
            1 2 3 
        1   0 0 0
    1   0   3 0 0
    2   0   0 6 0
    3   0   0 0 6
n-j-1 choices of unique songs at point j
num of new playlist : (n-j+1) * dp[i-1][j-1]=dp[i][j]

Also If : j>k
old songs replay : j-k : (replaying songs)
new playlist : dp[i-1][j]*(j-k) + dp[i][j] =dp[i][j]


    k=0
    n=2


            1 2
        1   0 0 
    1   0   2 0 
    2   0   2 2 
    3   0   2 6 

*/
