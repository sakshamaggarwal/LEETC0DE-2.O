class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string> ans;
        
        for(int i=0;i<n;++i)
        {
            int a=nums[i];
           while(i+1<n&&nums[i]+1==nums[i+1])
            {
                ++i;
            }
            if(a!=nums[i])
            {
                string temp="";
                temp+=to_string(a);
                temp+="-";
                temp+=">";
                temp+=to_string(nums[i]);
                ans.push_back(temp);
            }
            else
            {
                ans.push_back(to_string(nums[i]));
            }
        }
        return ans;
    }
};
