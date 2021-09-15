class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int maxa=INT_MIN,maxb=INT_MIN,maxc=INT_MIN;
        int mina=INT_MAX,minb=INT_MAX;
        for(int i:nums)
        {
            if(i>maxa)
            {
                maxc=maxb;
                maxb=maxa;
                maxa=i;
            }
            else if(i>maxb)
            {
                maxc=maxb;
                maxb=i;
            }
            else if(i>maxc)
                maxc=i;
            if(i<mina)
            {
                minb=mina;
                mina=i;
            }
            else if(i<minb)
            {
                minb=i;
            }
        }
        return max(mina*minb*maxa,maxa*maxb*maxc);
    }
};

// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
        
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         return max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
//     }
// };

// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
        
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         if(nums[n-1]<0)
//             return nums[n-1]*nums[n-2]*nums[n-3];
//         else if(nums[n-1]==0)
//             return 0;
//         else
//         {
//             nums[n-1]*=max(nums[n-2]*nums[n-3],nums[0]*nums[1]);
//             return nums[n-1];
//         }
//     }
// };
