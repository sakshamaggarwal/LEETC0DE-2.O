// Both solutions same and works. 2nd one with sort and for inside for loop...
// In first we use reverese instead of sort because TC of reverese O(n) and sort O(nlogn) !!

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        
        for(i=n-2;i>=0;--i)
            if(nums[i]<nums[i+1])
                break;
        if(i<0)
            reverse(nums.begin(),nums.end());
        else
        {
            for(j=n-1;j>=i;--j)
            {
                if(nums[i]<nums[j])
                    break;
            }
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};


// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int temp=0;
//         int n=nums.size();
//         for(int i=n-1;i>0;--i)
//         {
//             if(nums[i]>nums[i-1])
//             {
//                 int k=0;
//                 for(k=i;k<n;++k)
//                     if(nums[k]<=nums[i-1])
//                         break;
//                 swap(nums[k-1],nums[i-1]);
//                 sort(nums.begin()+i,nums.end());
//                 return;
//             }
//         }
//         sort(nums.begin(),nums.end());
//         return;
//     }
// };
