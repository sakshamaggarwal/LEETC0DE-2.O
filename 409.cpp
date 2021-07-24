class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int> m;
        int sum=0;
        bool check=false;
        for(char c:s)
        {
            m[c]++;
            if(m[c]==2)
            {
                sum+=2;
                m[c]=0;
            }
        }
        
        for(char c:s)
            if(m[c])
                check=true;
            
        if(check)
            sum++;
        return sum;
    }
};
