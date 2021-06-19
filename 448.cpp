class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n=nums.size();
        
        for(int i : nums)
            if(nums[abs(i)-1]>0)
                nums[abs(i)-1]*=-1;
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
            if(nums[i]>0)
                v.push_back(i+1);
        
        return v;
    }
};


// Extra Vector space

// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
        
//         int n=nums.size();
//         vector<int> v(n+1,0);
//         vector<int> v1;
//         for(int i : nums)
//             v[i]=1;
//         while(n>0)
//         {
//             if(v[n]==0)
//                 v1.push_back(n);
//             n--;
//         }
//         return v1;
//     }
// };

// MAP 

// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
        
//         int n=nums.size();
//         vector<int> v;
//         map<int,int> m;
//         for(int i : nums)
//             m[i]++;
//         while(n>0)
//         {
//             if(m[n]==0)
//                 v.push_back(n);
//             n--;
//         }
//         return v;
//     }
// };
