class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};

// MAP : 

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
        
//         map<char,int> m;
//         if(s.size()!=t.size())
//             return false;
//         int n=s.size();
//         for(int i=0;i<n;i++)
//         {
//             m[s[i]]++;
//             m[t[i]]--;
//         }
//         for(char c : t)
//             if(m[c]!=0)
//                 return false;
//         return true;
//     }
// };
