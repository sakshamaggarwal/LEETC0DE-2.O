class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int,int> m;
        for(int i:nums)
        {
            m[i]++;
            m[0]+=m[i]-1;
        }
        return m[0];
    }
};

// USing P and C formulae (n*n-1)/2: 
// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
        
//         unordered_map<int,int> m;
//         for(int i:nums)
//             m[i]++;
//         for(int i:nums)
//         {
//             m[0]+=((m[i]-1)*(m[i]))/2;
//             m[i]=0;
//         }
//         return m[0];
//     }
// };
