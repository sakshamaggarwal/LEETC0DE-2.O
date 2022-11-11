class Solution {
public:
    bool isDigit(char c)
    {
        if((c>=65&&c<=91)||(c>=97&&c<=123))
            return true;
        return false;
    }
    int lengthOfLastWord(string s) {
        int i=0;
        int n=s.size()-1;
        int ans=0;
        if(n==0&&isDigit(s[i]))
            return 1;
        while(i<=n)
        {
            if(!isDigit(s[n]))
            {
                --n;
                continue;
            }
            else
            {
                while(i<=n&&isDigit(s[n]))
                {
                    --n;
                    ++ans;    
                }
                return ans;
            }
        }
        return ans;
    }
};
