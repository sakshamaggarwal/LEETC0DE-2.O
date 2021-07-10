class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int n=points.size(), md, ans=INT_MAX, index=-1;
        for(int i=0;i<n;i++)
        {
            if(x==points[i][0]||y==points[i][1])
            {
                md=abs(x-points[i][0])+abs(y-points[i][1]);
                if(md<ans)
                {
                    ans=md;
                    index=i;
                }
            }
        }
        return index;
    }
};
