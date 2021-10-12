class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[&](vector<int>& a, vector<int>& b){
            return a[0]<b[0];
        });
        int n=intervals.size();
        for(int i=1;i<n;i++)
            if(intervals[i-1][1]>intervals[i][0])
                return false;
        return true;
    }
};
