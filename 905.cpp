class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n=nums.size()-1,i=0;
        while(i<n)
        {
            if(nums[i]%2==1&&nums[n]%2==0)
                swap(nums[i],nums[n]);
            if(nums[i]%2==0)
                i++;
            if(nums[n]%2==1)
                n--;
        }
        return nums;
    }
};

// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
        
//         int j=0,n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]%2==0)
//             {
//                 swap(nums[i],nums[j]);
//                 j++;
//             }
//         }
//         return nums;
//     }
// };

// Extra Space :
// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
        
//         vector<int> ans;
//         for(int i: nums)
//             if(i%2==0)
//                 ans.push_back(i);
//         for(int i:nums)
//             if(i%2==1)
//                 ans.push_back(i);
//         return ans;
//     }
// };
