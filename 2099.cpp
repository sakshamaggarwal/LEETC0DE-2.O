// Priority Queue : 

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        priority_queue<pair<int,int>> pq;
        
        int n=0;
        for(int i:nums)
            pq.push({i,n++});
            
        vector<int> ans;
        int temp=k;
        while(temp)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            temp--;
        }
        sort(ans.begin(),ans.end());
        
        for(int i=0;i<k;++i)
            ans[i]=nums[ans[i]];
            
        return ans;
    }
};


// Using Unordered_map :

// class Solution {
// public:
//     vector<int> maxSubsequence(vector<int>& nums, int k) {
        
//         vector<int> original=nums;
//         sort(nums.begin(),nums.end());
//         unordered_map<int,int> m;
//         vector<int> temp(nums.end()-k,nums.end());
        
//         for(int i:temp)
//             m[i]++;
        
//         vector<int> ans;
        
//         for(int i:original)
//             if(m[i]-->0)
//                 ans.push_back(i);
        
//         return ans;
//     }
// };

// something else //
// class Solution {
// public:
//     vector<int> maxSubsequence(vector<int>& nums, int k) {
//         priority_queue<int> temp;
//         for(int i:nums)
//             temp.push(i);
//         vector<int> ans;
//         while(k>0)
//         {
//             ans.push_back(temp.top());
//             temp.pop();
//             --k;
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
