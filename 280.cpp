class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<n-1;i+=2)
            swap(nums[i],nums[i+1]);
    }
};

// With extra Vector :
// class Solution {
// public:
//     void wiggleSort(vector<int>& nums) {
        
//         int n=nums.size(),k=0;
//         sort(nums.begin(),nums.end());
//         vector<int> ans(n,0);
        
//         for(int i=0;i<n;i++)
//         {
//             ans[k]=nums[i];
//             k+=2;
//             if(k>=n)
//                 k=1;
//         }
//         nums=ans;
//     }
// };
