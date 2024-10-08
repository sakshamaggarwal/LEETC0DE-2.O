// Time : O(N)
// Space : O(1)
class Solution {
public:
    int minSwaps(string s) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n;++i)
        {
            if(s[i]=='[')
                ++count;
            else
            {
                if(count>0)
                    --count;
            }
        }
        return (count+1)/2;
    }
};

// Time : O(N)
// Space : O(N)
// class Solution {
// public:
//     int minSwaps(string s) {
//         stack<int> store;
//         int n=s.size();
//         int unbalanced=0;
//         for(int i=0;i<n;++i)
//         {
//             if(s[i]=='[')
//                 store.push(s[i]);
//             else
//             {
//                 if(!store.empty())
//                     store.pop();
//                 else
//                     ++unbalanced;
//             }
//         }
//         return (unbalanced+1)/2;
//     }
// };
/*
    ]]][[[
    []][[]
    [][][]
*/
