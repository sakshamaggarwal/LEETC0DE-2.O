class Solution {
public:
    int minDistance(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();

        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        
        //base Conditions :
        dp[0][0]=0;
        dp[0][1]=1;
        dp[1][0]=1;
        for(int i=2;i<n1+1;++i)
        {
            dp[i][0]=dp[i-1][0]+1;
        }
        for(int j=2;j<n2+1;++j)
        {
            dp[0][j]=dp[0][j-1]+1;
        }
        
        for(int i=1;i<n1+1;++i)
        {
            for(int j=1;j<n2+1;++j)
            {
                if(word1[i-1]==word2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+1;
                }
            }
        }
        return dp[n1][n2];
    }
};

/*

Without using LCS :
not same : min(i-1)[j], [i][j-1]+1
same : [i-1][j-1]

          e t c o
        0 1 2 3 4 
    l   1 2 3 4 5
    e   2 1 2 3 4
    e   3 2 3 4 5
    t   4 3 2 3 4
    c   5 4 3 2 3
    o   6 5 4 3 2 
    d   7 6 5 4 3
    e   8 7 6 5 4

        a
      0 1 
    b 1 2

If we use LCS:
    same : [i-1][j-1]+1
    not same : max(i-1)[j-1]

*/

//Also can be done with 1D dp(space) :
