class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int m[26]={0};           //vector<int> m(26,0); // map<char,int> m;
        for(char c:magazine)
            m[c-'a']++;
        
        for(char c:ransomNote)
            if(!m[c-'a']--)
                return false;
            
        return true;
    }
};
