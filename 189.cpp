class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k%=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

// With Extra Vector :

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
        
//         int n=nums.size(),i=0;
//         vector<int> ans(n,0);
//         k=k%n;
        
//         while(i<n)
//         {
//             ans[k]=nums[i++];
//             k++;
//             if(k==n)
//                 k=0;   
//         }
//         nums=ans;
//     }
// };
