class Solution {
public:
    int countBinarySubstrings(string s) {
        
        int n=s.size(),currmin=1,prevmin=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
                currmin++;
            else
            {
                ans+=min(currmin,prevmin);
                prevmin=currmin;
                currmin=1;
            }
        }
        return ans;
    }
};


// while instead of if :
// class Solution {
// public:
//     int countBinarySubstrings(string s) {
        
//         int n=s.size(),currmin=1,prevmin=0,ans=0;
//         for(int i=0;i<n;i++)
//         {
//             while(s[i]==s[i+1])
//             {
//                 currmin++;
//                 i++;
//             }
//             ans+=min(currmin,prevmin);
//             prevmin=currmin;
//             currmin=1;
//         }
//         return ans;
//     }
// };
