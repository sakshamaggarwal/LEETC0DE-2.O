class Solution {
public:
    void helper(vector<vector<char>>& grid,int i, int j)
    {
        if((i<0)||(j<0)||(i>grid.size()-1)||(j>grid[0].size()-1)||(grid[i][j]=='0'))
            return;
        grid[i][j]='0';
        helper(grid,i+1,j);
        helper(grid,i-1,j);
        helper(grid,i,j+1);
        helper(grid,i,j-1);
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]=='1')
                {
                    ans++;
                    helper(grid,i,j);
                }
        return ans;
    }
};
