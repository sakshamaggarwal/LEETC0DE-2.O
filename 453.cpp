class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int sum=0,mm=INT_MAX;
        for(int i:nums)
        {
            sum+=i;
            mm=min(mm,i);
        }
        sum-=mm*nums.size();
        return sum;
    }
};

// Using Sort :
// class Solution {
// public:
//     int minMoves(vector<int>& nums) {
        
//         int n=nums.size(),ans=0;
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<n;i++)
//             ans+=nums[i]-nums[0];
//         return ans;
//     }
// };

// TLE :
// class Solution {
// public:
//     void increment(vector<int> & nums)
//     {
//         for(int i=0;i<nums.size()-1;i++)
//             nums[i]+=1;
//     }
//     int minMoves(vector<int>& nums) {
        
//         int k=0;
//         while(nums[0]!=nums[nums.size()-1])
//         {
//             k++;
//             increment(nums);
//             sort(nums.begin(),nums.end());
//         }
//         return k;
//     }
// };
