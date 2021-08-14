class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        char one[256]={0},two[256]={0};
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(one[s[i]]!=two[t[i]])
                return false;
            one[s[i]]=i+1;
            two[t[i]]=i+1;
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
        
//         unordered_map<char,char> m,m2;
//         int n=s.size();
//         for(int i=0;i<n;i++)
//         {
//             if(!m[s[i]])
//                 m[s[i]]=t[i];
//             else
//                 if(m[s[i]]!=t[i])
//                     return false;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(!m2[t[i]])
//                 m2[t[i]]=s[i];
//             else
//                 if(m2[t[i]]!=s[i])
//                     return false;
//         }
//         return true;
//     }
// };
