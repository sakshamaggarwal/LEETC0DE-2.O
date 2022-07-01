class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        int i=0;
        while(k)
        {
            i%=n;
            if(k==0)
                break;
            if(nums[i]<0)
            {
                nums[i]*=-1;
                k--;
            }
            else if(k%2==0)
                break;
            else
            {
                sort(nums.begin(),nums.end());
                nums[0]*=-1;
                k=0;
            }
            ++i;
        }
        
        return accumulate(nums.begin(),nums.end(),0);
        
//         int sum=0;
//         for(int i:nums)
//             sum+=i;
        
//         return sum;
    }
};  
