class Solution {
public:
    bool canConstruct(string s, int k) {
        
        int arr[26]={};
        if(k>s.size())
            return false;
        
        for(char c:s)
            arr[c-'a']++;
        for(int i=0;i<26;i++)
            if(arr[i]%2==1)
                k--;
        if(k<0)
            return false;
        return true;
    }
};



// class Solution {
// public:
//     bool canConstruct(string s, int k) {
        
//         unordered_map<char,int> m;
//         int p=0;
//         for(char c:s)
//             m[c]++;
//         for(char c:s)
//         {
//             if(m[c]%2==1)
//             {
//                 p++;
//                 m[c]=0;
//             }
//         }
//         if(k<p||k>s.size())
//             return false;
//         return true;
//     }
// };
