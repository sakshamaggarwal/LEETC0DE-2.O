class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int n=arr.size();

        unordered_map<int,int> dp;
        int ans=0;
        for(int i:arr)
        {
            if(dp[i-difference])
                dp[i]=dp[i-difference]+1;
            else
                dp[i]=1;
            ans=max(dp[i],ans);
        }
        return ans;
    }
};
