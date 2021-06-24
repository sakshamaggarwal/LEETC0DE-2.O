class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n-1;)
        {
            if(nums[i]!=nums[i+1])
                v.push_back(nums[i++]);
            else
                i+=2;
        }
        if(v.size()==1)
            v.push_back(nums[n-1]);
        return v;
    }
};
