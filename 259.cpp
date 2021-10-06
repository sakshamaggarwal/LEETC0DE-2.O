class Solution {
public:
    int twosumsmaller(vector<int> nums,int j,int target2)
    {
        int ans=0;
        int n2=nums.size()-1;
        while(j<n2)
        {
            if(nums[j]+nums[n2]>=target2)
                n2--;
            else
            {
                ans+=n2-j;
                j++;
            }
        }
        return ans;
    }
    int threeSumSmaller(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
            ans+=twosumsmaller(nums,i+1,target-nums[i]);
        return ans;
    }
};

// same logic, all in main function :
// class Solution {
// public:
//     int threeSumSmaller(vector<int>& nums, int target) {
//         int n=nums.size();
//         int ans=0,j,k;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n-2;i++)
//         {
//             j=i+1;
//             k=n-1;
//             while(j<k)
//             {
//                 if(nums[i]+nums[j]+nums[k]<target)
//                 {
//                     ans+=k-j;
//                     j++;
//                 }
//                 else if(nums[i]+nums[j]+nums[k]>=target)
//                     k--;
//             }
//         }
//         return ans;
//     }
// };
