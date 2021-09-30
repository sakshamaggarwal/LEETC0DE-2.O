class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size()-1;
        int ans=-1;
        while(i<n)
        {
            if(nums[i]+nums[n]>=k)
                n--;
            else
            {
                ans=max(ans,nums[i]+nums[n]);
                i++;
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     int twoSumLessThanK(vector<int>& nums, int k) {
//         int n=nums.size();
//         int ans=-1;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(nums[i]+nums[j]<k)
//                     ans=max(ans,nums[i]+nums[j]);
//             }
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     int twoSumLessThanK(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int> v;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(j==i)
//                     continue;
//                 v.push_back(nums[i]+nums[j]);
//             }
//         }
//         sort(v.begin(),v.end(),greater<int>());
//         for(int i:v)
//             if(i<k)
//                 return i;
//         return -1;
            
//     }
// };
