class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> m=nums;
        sort(m.begin(),m.end());
        int n=nums.size();
        unordered_map<int,int> mp;
        
        for(int i=1;i<n;i++)
        {
            if(m[i]==m[i-1])
                continue;
            mp[m[i]]=i;
        }
        
        for(int i=0;i<n;i++)
            nums[i]=mp[nums[i]];
            
        return nums;
    }
};
