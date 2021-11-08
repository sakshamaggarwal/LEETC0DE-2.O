class Solution {
public:
    void helper(vector<vector<int>>& grid, int i,int j)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[i].size()||grid[i][j]==1)
            return;
        grid[i][j]=1;
        helper(grid,i+1,j);
        helper(grid,i-1,j);
        helper(grid,i,j+1);
        helper(grid,i,j-1);
        return;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            helper(grid,i,0);
            helper(grid,i,m-1);
        }
        for(int j=0;j<m;j++)
        {
            helper(grid,0,j);
            helper(grid,n-1,j);
        }
        for(int i=1;i<n-1;i++)
            for(int j=1;j<m-1;j++)
                if(grid[i][j]==0)
                {
                    ans++;
                    helper(grid,i,j);
                }
        return ans;
    }
};
