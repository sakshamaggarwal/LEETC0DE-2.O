class Solution {
public:
    bool canPermutePalindrome(string s) {
        
        map<char,int> m;
        int k=0;
        for(char c:s)
            m[c]++;
        for(char c:s)
        {
            if(m[c]%2==1)
            {
                k++;
                m[c]=0;
            }
         
            if(k>1)
                return false;
        }
        return true;
    }
};
