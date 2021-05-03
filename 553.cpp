class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        
        int n=nums.size();
        string s;
        if(n==1)
        {
            s+=to_string(nums[n-1]);
            return s;
        }
        for(int i=0;i<n-1;i++)
        {
            s+=to_string(nums[i]);
            s+="/";
            if(i==0&&n>2)
                s+="(";
        }
        s+=to_string(nums[n-1]);
        if(n>2)
            s+=")";
        return s;
    }
};
