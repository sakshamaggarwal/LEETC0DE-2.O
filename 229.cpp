class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size(),k=0;
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            k=1;
            while(i<n-1&&nums[i]==nums[i+1])
            {
                k++;
                i++;
            }
            if(k>n/3)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};

// Using Maps
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
        
//         int n=nums.size();
//         map<int,int> m;
//         vector<int> ans;
//         for(int i=0;i<n;i++)
//         {
//             m[nums[i]]++;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(m[nums[i]]>n/3)
//             {
//                 ans.push_back(nums[i]);
//                 m[nums[i]]=0;
//             }
//         }
//         return ans;
//     }
// };
