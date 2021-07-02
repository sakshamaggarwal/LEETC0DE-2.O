class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int a=s.size(),i=0;
        if(s==t)
            return true;
        for(char c:t)
        {
            if(s[i]==c)
                i++;
            if(i==a)
                return true;
        }
        return false;
    }
};
