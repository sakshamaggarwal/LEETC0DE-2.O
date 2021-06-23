class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n=s.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<n;i++)
            if(s[i]!=t[i])
                return t[i];
        return t[n];
    }
};

// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         int n=t.size(),sum=0;
//         for(int i=0;i<n;i++)
//             sum+=int(t[i])-int(s[i]);
//         return char(sum);
//     }
// };
