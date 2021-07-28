class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int s=strs.size();
        sort(strs.begin(),strs.end());
        int n=strs[0].size(),i;
        for(i=0;i<n;i++)
            if(strs[0][i]!=strs[s-1][i])
                break;
        
        return strs[0].substr(0,i);
    }
};

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
    
//         int n=strs.size(),j,k=strs[0].size();
//         for(int i=1;i<n;i++)
//         {
//             j=0;
//             while(j<k&&strs[i][j]==strs[i-1][j])
//                 j++;
//             k=j;
//         }

//         return strs[0].substr(0,k);
//     }
// };
