class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=0,k=0;
        vector<int> ans;

        while(i<n&&j<m)
        {
            for(k=j;k<m;++k)
                ans.push_back(matrix[i][k]);
            ++i;

            for(int k=i;k<n;++k)
                ans.push_back(matrix[k][m-1]);
            --m;

            if(i<n)
                for(int k=m-1;k>=j;--k)
                    ans.push_back(matrix[n-1][k]);
            --n;
            
            if(j<m)
                for(int k=n-1;k>=i;--k)
                    ans.push_back(matrix[k][j]);
            ++j;
        }
        return ans;
    }
};
