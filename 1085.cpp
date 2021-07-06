class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int a=0;
        while(nums[0]>0)
        {
            a+=nums[0]%10;
            nums[0]/=10;
        }
        if(a%2==0)
            return 1;
        return 0;
    }
};
