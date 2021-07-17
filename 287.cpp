class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow=nums[0],fast=nums[0];
        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
            
        fast=nums[0];
        while(fast!=slow)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
            
        return slow;
    }
};



// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
        
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n-1;i++)
//             if(nums[i]==nums[i+1])
//                 return nums[i];
//         return nums[n-1];
//     }
// };

// // MAP
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
        
//         map<int,int> m;
//         for(int i: nums)
//         {
//             m[i]++;
//             if(m[i]>1)
//                 return i;
//         }
//         return 0;
//     }
// };
