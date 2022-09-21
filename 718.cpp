// 1-D Vector(DP memo) :

class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        
        if(n1<n2)
            return findLength(nums2,nums1);
        
        vector<int> dp(n2+1,0);
        int ans=0;
        
        for(int i=0;i<n1;++i)
        {
            for(int j=n2-1;j>=0;--j)
            {
                if(nums1[i]==nums2[j])
                    dp[j+1]=dp[j]+1;
                else
                    dp[j+1]=0;
                ans=max(ans,dp[j+1]);
            }
        }
        return ans;
    }
};


// 2-D Vector(DP memo) :

// class Solution {
// public:
//     int findLength(vector<int>& nums1, vector<int>& nums2) {
//         int n1=nums1.size();
//         int n2=nums2.size();
//         vector<vector<int>> dp(n1,vector<int>(n2,0));
        
//         int ans=0;
//         for(int i=0;i<n1;++i)
//         {
//             for(int j=0;j<n2;++j)
//             {
//                 if(nums1[i]==nums2[j])
//                     if(i==0||j==0)
//                         dp[i][j]+=1;
//                     else
//                         dp[i][j]=dp[i-1][j-1]+1;
//                 ans=max(dp[i][j],ans);
//             }
//         } 
//         return ans;
//     }
// };
