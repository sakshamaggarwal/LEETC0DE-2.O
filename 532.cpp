class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i:nums)
            m[i]++;
        int ans=0;
        if(k!=0)
        {
            for(auto it=m.begin();it!=m.end();it++)
                if(m.find(it->first+k)!=m.end())
                    ans++;
        }
        else
        {
            for(auto it=m.begin();it!=m.end();it++)
                if(it->second>1)
                    ans++;
        }
        return ans;
    }
};

// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         unordered_map<int,int> m;
//         for(int i:nums)
//             m[i]++;
//         int ans=0;
//         for(auto it=m.begin();it!=m.end();it++)
//             if((!k&&it->second>1)||(k&&(m.find(it->first+k)!=m.end())))
//                 ans++;
//         return ans;
//     }
// };


