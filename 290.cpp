class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char,string> m1;
        unordered_map<string,char> m2;
        
        stringstream str(s);
        int i=0;
        for(string k; str>>k;i++)
        {
            m1[pattern[i]]=k;
            m2[k]=pattern[i];
        }
        
        stringstream str2(s);
        i=0;
        for(string k;str2>>k;i++)
            if(m1[pattern[i]]!=k||m2[k]!=pattern[i])
                return false;
        
        return i==pattern.size();
    }
};

//using 2 maps and storing integer values :
// class Solution {
// public:
//     bool wordPattern(string pattern, string s) {
        
//         unordered_map<char,int> m1;
//         unordered_map<string,int> m2;
//         int i=0;
//         stringstream str(s);
//         for(string k;str>>k;i++)
//         {
//             if(m1[pattern[i]]!=m2[k])
//                 return false;
//             else
//             {
//                 m1[pattern[i]]=i+1;
//                 m2[k]=i+1;
//             }
//         }
//         return i==pattern.size();
//     }
// };
 
// using two maps and checking reversely :
// class Solution {
// public:
//     bool wordPattern(string pattern, string s) {
        
//         unordered_map<char,string> m1;
//         unordered_map<string,char> m2;
        
//         vector<string> abc;
//         stringstream str(s);
//         string l;
//         while(str>>l)
//             abc.push_back(l);
        
//         if(abc.size()!=pattern.size())
//             return false;
//         int i=0;
//         for(char c:pattern)
//         {
//             if(m1[c].empty())
//                 m1[c]=abc[i];
//             else
//                 if(m1[c]!=abc[i])
//                     return false;
//             i++;
//         }
//         for(int i=0;i<abc.size();i++)
//         {
//             if(!m2[abc[i]])
//                 m2[abc[i]]=pattern[i];
//             else
//                 if(m2[abc[i]]!=pattern[i])
//                     return false;
//         }
//         return true;
//     }
// };
