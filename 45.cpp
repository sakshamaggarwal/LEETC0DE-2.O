class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp(n+1,0);

        for(int i=0;i<n;++i)
        {
            int a=nums[i];
            int p=1;
            while(p<=a)
            {
                if(i+p<n&&temp[i+p]==0)
                {
                    temp[i+p]=temp[i]+1;
                }
                ++p;
            }
        }
        return temp[n-1];
    }
};
