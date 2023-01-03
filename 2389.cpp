class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<queries.size();++i)
        {
            int temp=queries[i];
            int j;
            for(j=0;j<nums.size();++j)
                {
                    if(temp-nums[j]<0)
                    {
                        ans.push_back(j);
                        break;
                    }
                    else if(temp-nums[j]==0)
                    {
                        ans.push_back(j+1);
                        break;
                    }
                    else
                        temp-=nums[j];
                }
            if(j==nums.size())
                ans.push_back(nums.size());
        }
        return ans;
    }
};
