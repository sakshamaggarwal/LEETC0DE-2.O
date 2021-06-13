class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> mymap;
        int k,n=nums.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            k=target-nums[i];
            if(mymap.find(k)!=mymap.end())
            {
                ans.push_back(i);
                ans.push_back(mymap[k]);
                return ans;
            }
            mymap[nums[i]]=i;
        }
        return ans;
    }
};
