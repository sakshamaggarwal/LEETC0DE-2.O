class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size(),k=0;
        for(int i=1;i<n;i++)
            if(nums[i]>nums[i-1])
            {
                k=i;
                if(i+1<n&&nums[i]>nums[i+1])
                    return i;
            }
        return k;
    }
};

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
        
//         int i=0,n=nums.size()-1,mid;
      
//         while(i<n)
//         {
//             mid=i+(n-i)/2;
//             if(nums[mid]<nums[mid+1])
//                 i=mid+1;
//             else
//                 n=mid;
//         }
//         return i;
//     }
// };

