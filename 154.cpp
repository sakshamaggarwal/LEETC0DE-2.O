class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        int n=nums.size()-1;
        while(i<n)
        {
            int m=(i+(n-i)/2);
            if(nums[m]>nums[n])
                i=m+1;
            else if(nums[m]<nums[n])
                n=m;
            else
                n--;
        }
        return nums[i];
    }
};

// Checking for minimum after maximum :
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=1;i<n;i++)
//             if(nums[i-1]>nums[i])
//                 return nums[i];
//         return nums[0];
//     }
// };

// Using map :
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         map<int,int> m;
//         for(int i:nums)
//             m[i]++;
//         map<int,int>:: iterator it;
//         it=m.begin();
//         return it->first;
//     }
// };
