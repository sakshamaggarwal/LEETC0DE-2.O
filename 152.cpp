class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int minp=nums[0];
        int maxp=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
                swap(minp,maxp);
            minp=min(minp*nums[i],nums[i]);
            maxp=max(maxp*nums[i],nums[i]);
            ans=max(ans,maxp);
        }
        return ans;
    }
};

// // Kaden's Algorithm :

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n=nums.size();
//         int prod=1;
//         int ans=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             if(prod==0)
//                 prod=1;
//             prod*=nums[i];
//             ans=max(prod,ans);
//         }
//         prod=1;a
//         for(int i=n-1;i>=0;i--)
//         {
//             if(prod==0)
//                 prod=1;
//             prod*=nums[i];
//             ans=max(prod,ans);
//         }
//         return ans;
//     }
// };
