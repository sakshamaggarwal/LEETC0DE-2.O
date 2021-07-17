class Solution {
public:
    string truncateSentence(string s, int k) {
        
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
                k--;
            if(k==0)
            {
                s.erase(s.begin()+i,s.end());
                return s;
            }
        }
        return s;
    }
};

// extra string : 
// class Solution {
// public:
//     string truncateSentence(string s, int k) {
        
//         string ans="";
//         for(char c:s)
//         {
//             if(c==' ')
//                 k--;
//             if(k==0)
//                 return ans;
//             ans+=c;
//         }
//         return ans;
//     }
// };


// Substring
// class Solution {
// public:
//     string truncateSentence(string s, int k) {
        
//         int i,n=s.size();
//         for(i=0;i<n;i++)
//         {
//             if(s[i]==' ')
//                 k--;
//             if(k==0)
//                 return s.substr(0,i);
//         }
//         return s.substr(0,i);
//     }
// };
