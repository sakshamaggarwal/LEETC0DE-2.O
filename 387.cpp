class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int> v(26,0);
        int n=s.size();
        for(char i:s)
            v[i-'a']++;
        for(int i=0;i<n;i++)
        {
            if(v[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};

//  With MAP

// class Solution {
// public:
//     int firstUniqChar(string s) {
        
//         int n=s.size();
//         map<char,int> m;
//         for(int i=0;i<n;i++)
//         {
//             m[s[i]]++;
//          }
//         for(int i=0;i<n;i++)
//         {
//             if(m[s[i]]==1)
//                 return i;
//         }
//         return -1;
//     }
// };
