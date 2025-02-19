class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        if(n==0 || m==0)
            return vector<int>(0);
        bool rev=true;
        int row=0, col=0;
        vector<int> ans;

        while(row<n && col<m)
        {
            if(rev)
            {
                while(row>0 && col<m-1)
                {
                    ans.push_back(mat[row][col]);
                    row--;
                    col++;
                }
                ans.push_back(mat[row][col]);
                if(col==m-1)
                    row++;
                else
                    col++;
            }
            else
            {
                while(col>0 && row<n-1)
                {
                    ans.push_back(mat[row][col]);
                    col--;
                    row++;
                }
                ans.push_back(mat[row][col]);
                if(row==n-1)
                    col++;
                else
                    row++;
            }
            rev=!rev;
        }
        return ans;
    }
};

/*

    1 2 3 
    4 5 6 
    7 8 9

    00 01 02
    10 11 12
    20 21 22

    00 01 02 03 04 05
    10 11 12 13 14 15
    20 21 22 23 24 25
    30 31 32 33 34 35
    40 41 42 43 44 45
*/
