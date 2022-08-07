class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>> temp;
        
        int n1=nums1.size(), n2= nums2.size();
        vector<vector<int>> ans;
        
        for(int i=0;i<n1;++i)
        {
            for(int j=0;j<n2;++j)
            {
                int sum=nums1[i]+nums2[j];
                if(temp.size()<k)
                {
                    temp.push({sum,{nums1[i],nums2[j]}});
                }
                else if(temp.top().first>sum)
                {
                    temp.pop();
                    temp.push({sum,{nums1[i],nums2[j]}});
                }
                else
                    break;
            }
        }
        while(!temp.empty())
        {
            ans.push_back({temp.top().second.first,temp.top().second.second});
            temp.pop();
        }
        return ans;
    }
};
