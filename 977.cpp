class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int i=0,n=nums.size()-1;
        int k=n;
        vector<int> v(n+1,0);
        while(i<=n)
        {
            if(abs(nums[i])>abs(nums[n]))
                v[k--]=nums[i]*nums[i++];
            else
                v[k--]=nums[n]*nums[n--];
        }
        return v;
    }
};
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
        
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//             nums[i]*=nums[i];
//         sort(nums.begin(),nums.end());
//         return nums;
//     }
// };
