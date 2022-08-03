class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        
        for(int i:nums)
            sum+=i;
        int sumLeft=0;
        for(int i=0;i<n;++i)
        {
            if(sum-nums[i]==sumLeft*2)
                return i;
            sumLeft+=nums[i];
        }
        return -1;
    }
};
