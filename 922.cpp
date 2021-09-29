class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int j=1;
        for(int i=0;i<n;i+=2)
        {
            if(nums[i]%2==1)
            {
                while(nums[j]%2==1)
                    j+=2;
                swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};

// class Solution {
// public:
//     vector<int> sortArrayByParityII(vector<int>& nums) {
//         int n=nums.size();
//         int j=1;
//         for(int i=0;i<n;i+=2,j+=2)
//         {
//             while(i<n&&nums[i]%2==0)
//                 i+=2;
//             while(j<n&&nums[j]%2==1)
//                 j+=2;
//             if(i<n&&j<n)
//                 swap(nums[i],nums[j]);
//         }
//         return nums;
//     }
// };


// With Extra String : 
// class Solution {
// public:
//     vector<int> sortArrayByParityII(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> ans(n,0);
//         int j=0,k=1;
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]%2==0)
//             {
//                 ans[j]=nums[i];
//                 j+=2;
//             }
//             else
//             {
//                 ans[k]=nums[i];
//                 k+=2;
//             }
//         }
//         return ans;
//     }
// };
