/*
[1,1,0]
[1,1,0]
[0,0,1]

[1,0,0,1]
[0,1,1,0]
[0,1,1,1]
[1,0,1,1]
*/

// O(N), O(N) : Both time and Space // Every city will be visited once...

class Solution {
public:
    void helper(int i, int n, vector<bool>& filled, vector<vector<int>> isConnected)
    {
        if(filled[i])
            return;
        filled[i]=true;
        for(int j=0;j<n;++j)
        {
            if(isConnected[i][j]==1&& i!=j)
            {
                helper(j,n,filled,isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();

        vector<bool> filled(n,false);
        int ans=0;

        for(int i=0;i<n;++i)
        {
            if(filled[i]==false)
            {
                ans++;
                helper(i,n,filled,isConnected);
            }
        }
        return ans;
    }
};
