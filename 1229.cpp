class Solution {
public:
    vector<int> minAvailableDuration(vector<vector<int>>& slots1, vector<vector<int>>& slots2, int duration) {
        int pt1=0;
        int pt2=0;
        int n1=slots1.size();
        int n2=slots2.size();
        sort(slots1.begin(),slots1.end());
        sort(slots2.begin(),slots2.end());
        while(pt1<n1&&pt2<n2)
        {
            int start=max(slots1[pt1][0],slots2[pt2][0]);
            int end=min(slots1[pt1][1],slots2[pt2][1]);
            if(end-start>=duration)
                return {start,start+duration};
            else if(slots2[pt2][1]>slots1[pt1][1])
                pt1++;
            else
                pt2++;
        }
        return {};
    }
};
