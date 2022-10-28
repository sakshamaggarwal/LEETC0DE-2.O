class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        
        vector<pair<int,int>> m1,m2;
        int n=img1.size();
        int m=img2.size();
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(img1[i][j]==1)
                    m1.push_back({i,j});
                if(img2[i][j]==1)
                    m2.push_back({i,j});
            }
        }
        map<pair<int,int>,int> temp;
        int ans=0;
        for(auto i: m1)
        {
            for(auto j: m2)
            {
                int a=i.first-j.first;
                int b=i.second-j.second;
                temp[{a,b}]++;
                ans=max(ans,temp[{a,b}]);
            }
        }
        return ans;
    }
};
