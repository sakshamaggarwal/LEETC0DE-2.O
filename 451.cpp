class Solution {
public:
    string frequencySort(string s) {
        
        int n=s.size();
        unordered_map<char,int> m;
        for(char i:s)
            m[i]++;
        
        multimap<int,char> mm;
        for(auto it : m)
            mm.insert({it.second,it.first});
        
        s="";
        multimap<int,char> :: reverse_iterator it;
        int p=0;
        for(it=mm.rbegin();it!=mm.rend();it++)
        {
            p=it->first;
            while(p--)
            {
                s+=it->second;
            }
        }
        return s;
    }
};

// class Solution {
// public:
//     string frequencySort(string s) {
        
//         unordered_map<char,int> m;
//         for(char c:s)
//             m[c]++;
//         sort(s.begin(),s.end(),[&](char& a,char& b){
//             return m[a]==m[b] ? a>b : m[a] > m[b];
//         });
//         return s;
//     }
// };
