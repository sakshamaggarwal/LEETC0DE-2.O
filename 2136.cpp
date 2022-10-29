class Solution {
public:
    static bool comparator(pair<int,int>& a, pair<int,int>& b)
    {
        return a.second<b.second;
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int pt=plantTime.size();
        vector<pair<int,int>> p;
        
        for(int i=0;i<pt;++i)
            p.push_back({plantTime[i],growTime[i]});

        sort(p.begin(),p.end(),comparator);
        int ans=0;
        for(pair<int,int> temp:p)
        {
            ans+=temp.first;
            ans=max(ans,temp.second+temp.first);
        }
        return ans;
    }
};
