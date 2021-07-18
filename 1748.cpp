class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int ans=0;
        map<int,int> m;
        for(int i:nums)
            m[i]++;
        for(int i:nums)
            if(m[i]==1)
                ans+=i;
        return ans;
    }
};
