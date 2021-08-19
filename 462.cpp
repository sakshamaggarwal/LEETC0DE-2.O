class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0,k=nums[n/2];
        for(int i:nums)
            ans+=abs(k-i);
        return ans;
    }
};

// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
        
//         int n=nums.size()-1,i=0,ans=0;
//         sort(nums.begin(),nums.end());
//         while(i<n)
//             ans+=nums[n--]-nums[i++];
//         return ans;
//     }
// };

