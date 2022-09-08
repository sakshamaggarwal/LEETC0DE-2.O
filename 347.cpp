// USing Priority_queue
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> m;
        for(int i:nums)
            m[i]++;
        priority_queue<pair<int,int>> pq;
        for(auto it:m)
            pq.push(make_pair(it.second,it.first));
        nums.clear();
        while(k && !pq.empty())
        {
            nums.push_back(pq.top().second);
            pq.pop();
            --k;
        }
        return nums;
    }
};
    
// Using multimap :
// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         int n=nums.size();
//         unordered_map<int,int> m;
//         for(int i:nums)
//             m[i]++;
//         multimap<int,int> m2;
//         for(auto it:m)
//             m2.insert({it.second,it.first});
//         nums.clear();
//         multimap<int,int> :: reverse_iterator it;
//         for(auto it=m2.rbegin();it!=m2.rend();++it)
//         {
//             nums.push_back(it->second);
//             --k;
//             if(!k)
//                 break;
//         }
//         return nums;
//     }
// };
