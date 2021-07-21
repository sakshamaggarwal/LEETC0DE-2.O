class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(m.count(nums[i]))
                if(i-m[nums[i]]<=k)
                    return true;
            m[nums[i]]=i;
        }
        return false;
    }
};
// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
//         int n=nums.size();
//         set<int> s;
//         for(int i=0;i<n;i++)
//         {
//             if(s.find(nums[i])!=s.end())
//                 return true;
//             s.insert(nums[i]);
//             if(s.size()>k)
//                 s.erase(nums[i-k]);
//         }
//         return false;
//     }
// };

// USing MAP :

// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
//         if(k==0)
//             return false;
//         int n=nums.size(),a=0;
//         k=max(1,k%n);
//         map<int,int> m;
//         for(int i=0;i<n;i++)
//         {
//             m[nums[i]]++;
//             if(m[nums[i]]>1)
//             {
//                 a=max(i-k,0);
//                 while(a<i)
//                     if(nums[a++]==nums[i])
//                         return true;
//             }
//         }
//         return false;
//     }
// };




// // BOTH TLE :

// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//             for(int j=max(0,i-k);j<i;j++)
//                 if(nums[i]==nums[j])
//                     return true;
//         return false;
//     }
// };


// // class Solution {
// // public:
// //     bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
// //         int n=nums.size(),a=0;
        
// //         for(int i=0;i<n;i++)
// //         {
// //             if(k+i<n)
// //                 a=k+i;
// //             else
// //                 a=n-1;
// //             while(a>i)
// //             {
// //                 if(nums[a--]==nums[i])
// //                     return true;
// //             }
// //         }
// //         return false;
// //     }
// // };
