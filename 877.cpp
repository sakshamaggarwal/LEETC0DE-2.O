class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};

// Does not run all test cases;
// class Solution {
// public:
//     bool stoneGame(vector<int>& piles) {
        
//         int n=piles.size()-1;
//         int i=0,k=0,sum=0;
//         while(i<n)
//         {
//             if(k==1)
//             {
//                 if(piles[i]>piles[n])
//                     sum-=piles[i++];
//                 else
//                     sum-=piles[n--]; 
//                 k=0;
//             }
//             else
//             {
//                 if(piles[i]>piles[n])
//                     sum+=piles[i++];
//                 else
//                     sum+=piles[n--];                
//                 k=1;
//             }
//         }
//         return sum>0;
//     }
// };
