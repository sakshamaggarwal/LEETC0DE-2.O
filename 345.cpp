class Solution {
public:
    bool isv(char a)
    {
        if(tolower(a)=='a'||tolower(a)=='e'||tolower(a)=='i'||tolower(a)=='o'||tolower(a)=='u')
            return true;
        return false;
    }
    
    string reverseVowels(string s) {
        
        int n=s.size(),i=0;
        while(i<n)
        {
            if(isv(s[i])&&isv(s[n-1]))
                swap(s[i],s[n-1]);
            else if(isv(s[i]))
            {
                while(i<n&&!isv(s[n-1]))
                    n--;
                swap(s[i],s[n-1]);
            }
            else if(isv(s[n-1]))
            {
                while(i<n&&!isv(s[i]))
                    i++;
                swap(s[i],s[n-1]);
            }
                i++;
                n--;
        }
        return s;
    }
};
