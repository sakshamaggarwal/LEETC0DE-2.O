class Solution {
public:
    const int MOD = 1e9 + 7;

    int numMod(int a, int b)
    {
        return (1LL*a*b)%MOD;
    }

    int maximumProduct(vector<int>& nums, int k) {
        
        // priority_queue<int> pq;
        // for(int i : nums)
        //     pq.push(i);
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());   //******

        int n=nums.size();

        while(k>0)
        {
            int a=pq.top();
            pq.pop();
            a+=1;
            --k;
            pq.push(a);
        }
        int prod=pq.top();
        pq.pop();
        
        while(!pq.empty())
        {
            prod=numMod(pq.top(),prod);
            pq.pop();
        }
        return prod;
    }
};


// TLE : 
// class Solution {
// public:
//     const int MOD = 1e9 + 7;

//     int numMod(int a, int b)
//     {
//         return (1LL*a*b)%MOD;
//     }

//     int maximumProduct(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();

//         while(k>0)
//         {
//             nums[0]+=1;
//             --k;
//             if(nums[0]>nums[1])
//             {
//                 sort(nums.begin(),nums.end());
//             }
//         }
//         int prod=nums[0];
        
//         for(int i=1;i<n;++i)
//         {
//             prod=numMod(nums[i],prod);
//         }
//         return prod;
//     }
// };
