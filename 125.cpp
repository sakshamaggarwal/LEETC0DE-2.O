class Solution {
public:
    bool isPalindrome(string s) {
        
        int n=s.size()-1,i=0;
        while(i<n)
        {
            if((s[i]>=65&&s[i]<91)||(s[i]<123&&s[i]>=97)||(s[i]<=57&&s[i]>=48))
               {
                   if((s[n]>=65&&s[n]<91)||(s[n]<123&&s[n]>=97)||(s[n]<=57&&s[n]>=48))
                    {
                        if(tolower(s[i])==tolower(s[n]))
                        {
                            i++;
                            n--;
                        }
                        else
                            return false;
                    }
                    else 
                        n--;
            }
            else
                i++;
        }
        return true;
    }
};
