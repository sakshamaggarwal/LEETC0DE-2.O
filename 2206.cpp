class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i:nums)
            m[i]++;
        for(int i:nums)
            if(m[i]%2!=0)
                return false;
        return true;
    }
};
