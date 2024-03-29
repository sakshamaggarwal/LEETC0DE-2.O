class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();

        for(int i=1;i<=n/2;++i)
        {
            string pattern="";
            if(n%i==0)
            {
                for(int j=0;j<n/i;++j)
                {
                    pattern+=s.substr(0,i);
                }
            }
            if(pattern==s)
                return true;
        }
        return false;
    }
};
