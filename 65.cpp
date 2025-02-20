class Solution {
public:
    bool isNumber(string s) {
        int n=s.size();
        
        bool digit = false;
        bool deci = false;
        bool expo = false;
        for(int i=0; i<n; ++i)
        {
            char ch=s[i];
            cout<<ch;
            if(ch>='0' && ch<='9')
                digit = true;
            else if(ch=='-' || ch=='+')
            {
                if(i>0 && (s[i-1]!='e' && s[i-1]!='E'))
                    return false;
            }
            else if(ch=='e' || ch=='E')
            {
                if(expo || !digit)
                    return false;
                expo = true;
                digit = false;
            }
            else if(ch=='.')
            {
                if(expo || deci)
                    return false;
                deci = true;
            }
            else
                return false;
        }
        return digit;
    }
};
/*
    digit
    exponent
    +-
    decimal
*/
