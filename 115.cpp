/*
    b a b g b a g
  1 0 0 0 0 0 0 0
b 1 1 0 0 0 0 0 0
a 1 1 1 0 0 0 0 0
g 1 1 1 0 0 0 0 0

2 D :
if equal : dp[i][j] = dp[i-1][j-1]+dp[i-1][j] else dp[i][j]=dp[i-1][j]
    b a g
  1 0 0 0
b 1 1 0 0 
a 1 1 1 0 
b 1 2 1 0
g 1 2 1 1
b 1 3 1 1
a 1 3 4 1 
g 1 3 4 5

    b a b g b a g
  1 1 1 1 1 1 1 1 
b 1 2 1 2 1 2 1 1
a 1 2 3 2 2 2 3 1
g 1 2 3 3 3 2 3 4

1 D :
t -> bag      j
s -> babgbag  i
if(s[i-1] == t[j-1]) dp[j] = dp[j-1] + dp[j];
    b a g g b a g
    b a g    
  1 0 0 0 

  1 1 0 0 b
  1 1 1 0 a
  1 1 1 1 g
  1 1 1 2 g
  1 2 1 2 b
  1 2 3 2 a
  1 2 3 5 g
         

*/

// 1D Solution : 
class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<double> dp(m+1,0);
        dp[0]=1;
        for(int i=0;i<n;++i)
        {
          for(int j=m-1;j>=0;--j)
          {
            if(s[i]==t[j])
              dp[j+1]+=dp[j];
          }
        }
        return dp[m];
    }
};

// // 2D solution : 
// class Solution {
// public:
//     int numDistinct(string s, string t) {
//         int n=s.size();
//         int m=t.size();
//         vector<vector<double>> dp(n+1,vector<double>(m+1,0));
        
//         for(int i=0;i<=n;++i)
//         {
//             dp[i][0]=1;
//         }

//         for(int j=1;j<=m;++j)
//         {
//             for(int i=1;i<=n;++i)
//             {
//                 if(s[i-1]==t[j-1])
//                 {
//                     dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
//                 }
//                 else
//                     dp[i][j]=dp[i-1][j];
//             }
//         }
//         return dp[n][m];
//     }
// };
