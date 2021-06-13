class Solution {
public:
    int distance(int a,int b)
    {
        return a*a+b*b;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        int n=points.size();
        vector<int> v(n+1,INT_MAX);
        
        for(int i=0;i<n;i++)
        {
            v[i]=distance(points[i][0],points[i][1]);
        }
        
        sort(v.begin(),v.end());
        int p=v[k];
        vector<vector<int>> a;
        
        for(int i=0;i<n;i++)
        {
            if(distance(points[i][0],points[i][1])<p)
                a.push_back(points[i]);
        }
        return a;
    }
};
