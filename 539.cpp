class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();

        int hr=0;
        int minute=0;
        vector<int> minutes;

        for(string s : timePoints)
        {
            hr=(s[0]-'0')*10+(s[1]-'0');
            minute=(s[3]-'0')*10+(s[4]-'0');
            int totalMin=hr*60+minute;
            minutes.push_back(totalMin);
        }
        sort(minutes.begin(), minutes.end());
        int mini=INT_MAX;
        for(int i=1;i<n;++i)
        {
            mini=min(mini,minutes[i]-minutes[i-1]);
        }
        mini=min(mini,1440-minutes[n-1]+minutes[0]);
        return mini;
    }
};

/*
HR = 
timePoints[i][0]*10
timePoints[i][1]

Min =
timePoints[i][3]*10
timePoints[i][4]

totalmin= HR*60+min
min of difference
edge - last and first

24*60
1440

1380
59
1439

*/
