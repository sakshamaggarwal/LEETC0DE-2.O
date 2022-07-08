// DP : Space Optimized

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.size();
        int n2=s2.size();
        int n3=s3.size();
        
        if(n1+n2!=n3)
            return false;
        vector<bool> curr(n2+1,0),prev(n2+1,0);
        
        int k=0;
        for(int i=n1;i>=0;--i)
        {
            for(int j=n2;j>=0;--j)
            {
                k=i+j;
                if(i==n1&&j==n2)
                    curr[j]=1;
                else if(s3[k]==s1[i]&&s3[k]==s2[j])
                    curr[j]=prev[j]||curr[j+1];
                else if(s3[k]==s1[i])
                    curr[j]=prev[j];
                else if(s3[k]==s2[j])
                    curr[j]=curr[j+1];
                else
                    curr[j]=0;
            }
            prev=curr;
        }
        return prev[0];
    }
};



// DP Tabulation ( from end ):

// class Solution {
// public:
//     bool isInterleave(string s1, string s2, string s3) {
//         int n1=s1.size(), n2=s2.size(), n3=s3.size();
//         if(n1+n2!=n3)
//             return false;
//         if((n1==0&&s2!=s3)||(n2==0&&s1!=s3))
//             return false;
//         if(s1==s3||s2==s3)
//             return true;
//         vector<vector<bool>> dp(n1+1,vector<bool>(n2+1,false));
//         int k=0;
//         for(int i=n1;i>=0;--i)
//         {
//             for(int j=n2;j>=0;--j)
//             {
//                 k=i+j;
//                 if(i==n1&&j==n2)
//                     dp[i][j]=1;
//                 else if(s3[k]==s1[i]&&s3[k]==s2[j])
//                     dp[i][j]=dp[i+1][j]||dp[i][j+1];
//                 else if(s2[j]==s3[k])
//                     dp[i][j]=dp[i][j+1];
//                 else if(s1[i]==s3[k])
//                     dp[i][j]=dp[i+1][j];
//                 else
//                     dp[i][j]=0;
//             }
//         }
//         return dp[0][0];
//     }
// };


// DP Tabulation (from begining) : 

// class Solution {
// public:
//     bool isInterleave(string s1, string s2, string s3) {
//         int n1=s1.size();
//         int n2=s2.size();
//         int n3=s3.size();
        
//         if(n1+n2!=n3)
//             return false;
//         vector<vector<bool>> dp(n1+1,vector<bool>(n2+1,false));
        
//         dp[0][0]=true;
//         for(int i=0;i<n1;++i)
//             if(dp[i][0]&&s3[i]==s1[i])
//                 dp[i+1][0]=1;
//         for(int j=0;j<n2;++j)
//             if(dp[0][j]&&s3[j]==s2[j])
//                 dp[0][j+1]=1;
        
//         for(int i=0;i<n1;++i)
//         {
//             for(int j=0;j<n2;++j)
//             {
//                 if(dp[i][j+1]&&s3[i+j+1]==s1[i])
//                     dp[i+1][j+1]=true;
//                 if(dp[i+1][j]&&s3[i+j+1]==s2[j])
//                     dp[i+1][j+1]=true;
//             }
//         }
//         return dp[n1][n2];
//     }
// };


// Recursion with Memoisation : 

// class Solution {
// public:
//     bool helper(int i, int j, int k, int n1, int n2, int n3, string s1, string s2, string s3, vector<vector<int>>& dp)
//     {
//         if(i==n1&&j==n2&&k==n3)
//             return true;
//         if(i>n1||j>n2)
//             return false;
//         if(dp[i][j]!=-1)
//             return dp[i][j];
//         if(s1[i]==s3[k]&&s2[j]==s3[k])
//             return dp[i][j]=helper(i+1,j,k+1,n1,n2,n3,s1,s2,s3,dp)||helper(i,j+1,k+1,n1,n2,n3,s1,s2,s3,dp);
//         else if(s3[k]==s1[i])
//             return dp[i][j]=helper(i+1,j,k+1,n1,n2,n3,s1,s2,s3,dp);
//         else if(s3[k]==s2[j])
//             return dp[i][j]=helper(i,j+1,k+1,n1,n2,n3,s1,s2,s3,dp);
//         else
//             return dp[i][j]=false;
//     }
//     bool isInterleave(string s1, string s2, string s3) {
//         int n1=s1.size(),n2=s2.size(),n3=s3.size();
//         if(n1+n2!=n3)
//             return false;
//         vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
//         return helper(0,0,0,n1,n2,n3,s1,s2,s3,dp);
//     }
// };


// Recursion : TLE

// class Solution {
// public:
//     bool helper(string s1, string s2, string s3, int n1, int n2, int n3, int i, int j, int k)
//     {//cout<<i<<j<<k<<endl;
//         if(i==n1&&j==n2||k==n3)
//             return true;
//         if(i<n1&&j<n2&&(s3[k]==s1[i]&&s3[k]==s2[j]))
//             return (helper(s1,s2,s3,n1,n2,n3,i+1,j,k+1))||(helper(s1,s2,s3,n1,n2,n3,i,j+1,k+1));
//         else if(i<n1&&s3[k]==s1[i])
//             return (helper(s1,s2,s3,n1,n2,n3,i+1,j,k+1));
//         else if(j<n2&&s3[k]==s2[j])
//             return (helper(s1,s2,s3,n1,n2,n3,i,j+1,k+1));
//         else
//             return false;
//     }
//     bool isInterleave(string s1, string s2, string s3) {
        
//         int n1=s1.size();
//         int n2=s2.size();
//         int n3=s3.size();
//         if(n1+n2!=n3)
//             return false;
//         // int i=0,j=0,k=0;
//         return helper(s1,s2,s3,n1,n2,n3,0,0,0);
//     }
// };
