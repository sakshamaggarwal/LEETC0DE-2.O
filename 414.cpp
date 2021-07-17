class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int a=INT_MAX,k=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<a)
            {
                k++;
                a=nums[i];
            }
            if(k==3)
                return a;
        }
        return nums[n-1];
    }
};
