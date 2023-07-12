class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>> ans;
        bool flag=false;
        if(intervals.size()==0)
        {
            ans.push_back(newInterval);
            return ans;
        }
        if(intervals[0][0]>newInterval[1])
        {
            ans.push_back(newInterval);
            flag=true;
        }
        
        int end=0,start=INT_MAX;
        int i=0;
        for( ;i<n;++i)
        {
            if(intervals[i][1]>=newInterval[0]&&intervals[i][0]<=newInterval[1])
            {
                flag=true;
                while(i<n&&intervals[i][1]>=newInterval[0]&&intervals[i][0]<=newInterval[1])
                {
                    start=min(start,min(newInterval[0],intervals[i][0]));
                    end=max(end,max(newInterval[1],intervals[i][1]));
                    ++i;
                }
                ans.push_back({start,end});
                break;
            }
            else
            {
                if(!flag&&newInterval[1]<intervals[i][0])
                {
                    ans.push_back(newInterval);
                    flag=true;
                }
                ans.push_back(intervals[i]);
            }
        }
        while(i<n)
        {
            ans.push_back(intervals[i]);
            ++i;
        }
        if(!flag)
        {
            ans.push_back(newInterval);
            return ans;
        }
        return ans;
    }
};
