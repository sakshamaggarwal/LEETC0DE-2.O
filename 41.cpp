class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
            if(nums[i]<=0)
                nums[i]=n+1;
        
        for(int i=0;i<n;i++)
            if(abs(nums[i])<=n&&nums[abs(nums[i])-1]>0)
                nums[abs(nums[i])-1]*=-1;
                
        for(int i=0;i<n;i++)
            if(nums[i]>0)
                return i+1;
        
        return n+1;
    }
};

// Using Sorting and Unique
// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         nums.erase(unique(nums.begin(),nums.end()),nums.end());
//         int n=nums.size();
//         int i=0;
//         while(i<n&&nums[i]<=0)
//             i++;
//         int j=1;
//         for(;i<n;i++)
//         {
//             if(nums[i]!=j)
//                 return j;
//             j++;
//         }
//         return j;
//     }
// };

// MAP 
// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
        
//         int n=nums.size();
//         map<int,int> m;
//         for(int i:nums)
//             m[i]++;
//         for(int i=1;;i++)
//         {
//             if(m[i]==0)
//                 return i;
//         }
//         return 1;
//     }
// };
