class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i+=2)
            if(nums[i]!=nums[i+1])
                return nums[i];
        return nums[n-1];
    }
};

// MAP
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
        
//         map<int,int> m;
//         for(int i:nums)
//             m[i]++;
//         for(int i:nums)
//             if(m[i]==1)
//                 return i;
//         return 0;
//     }
// };
