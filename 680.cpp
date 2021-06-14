class Solution {
public:
    bool check(string s,int i,int n)
    {
        while(i<n)
        {
            if(s[i]!=s[n])
                return false;
            i++;
            n--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        
        int n=s.size()-1,i=0;
        while(i<n)
        {
            if(s[i]!=s[n])
            {
                return check(s,i+1,n)||check(s,i,n-1);
            }
            i++;
            n--;
        }
        return true;
    }
};
