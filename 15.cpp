class Solution {
public:
    void twosum(vector<int>& nums,int i,vector<vector<int>>& ans)
    {
        int low=i+1,high=nums.size()-1,sum;
        while(low<high)
        {
            sum=nums[low]+nums[high]+nums[i];
            if(sum<0)
                low++;
            else if(sum>0)
                high--;
            else
            {
                ans.push_back({nums[i],nums[low++],nums[high--]});
                while(low<high&&nums[low]==nums[low-1])
                    low++;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n&&nums[i]<=0;i++)
        {
            if(i==0||nums[i]!=nums[i-1])
                twosum(nums,i,ans);
        }
        return ans;
    }
};

// class Solution {
// public:
//     void twosum(vector<int>& nums,int i, vector<vector<int>>& ans)
//     {
//         set<int> seen;
//         int n=nums.size(),diff;
//         for(int j=i+1;j<n;j++)
//         {
//             diff=-1*(nums[i]+nums[j]);
//             if(seen.find(diff)!=seen.end())
//             {
//                 ans.push_back({nums[i],nums[j],diff});
//                 while(j+1<n&&nums[j]==nums[j+1])
//                     j++;
//             }
//             seen.insert(nums[j]);
//         }
//     }
//     vector<vector<int>> threeSum(vector<int>& nums) {
        
//         int n=nums.size();
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n&&nums[i]<=0;i++)
//         {
//             if(i==0||nums[i]!=nums[i-1])
//                 twosum(nums,i,ans);
//         }
//         return ans;
//     }
//  };

// unordered_MAP instead of SET 
// class Solution {
// public:
//     void twosum(vector<int>& nums,int i, vector<vector<int>>& ans)
//     {
//         unordered_map<int,int> seen;
//         int n=nums.size(),diff;
//         for(int j=i+1;j<n;j++)
//         {
//             diff=-1*(nums[i]+nums[j]);
//             if(seen[diff]>0)
//             {
//                 ans.push_back({nums[i],nums[j],diff});
//                 while(j+1<n&&nums[j]==nums[j+1])
//                     j++;
//             }
//             seen[nums[j]]++;
//         }
//     }
//     vector<vector<int>> threeSum(vector<int>& nums) {
        
//         int n=nums.size();
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n&&nums[i]<=0;i++)
//         {
//             if(i==0||nums[i]!=nums[i-1])
//                 twosum(nums,i,ans);
//         }
//         return ans;
//     }
// };
