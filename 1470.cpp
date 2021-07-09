class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        n+=n;
        vector<int> ans(n);
        for(int i=0;i<n;i++)
            ans[i]=nums[i/2+(n/2)*(i%2)];
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
        
//         n+=n;
//         vector<int> ans(n);
//         for(int i=0,j=0;i<n;j++)
//         {
//             ans[i]=nums[j];
//             i+=2;
//             if(i==n)
//                 i=1;
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
        
//         vector<int> ans;
//         for(int i=0;i<n;i++)
//         {
//             ans.push_back(nums[i]);
//             ans.push_back(nums[i+n]);
//         }
//         return ans;
//     }
// };
