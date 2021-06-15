class Solution {
public:
    string reverseWords(string s) {
        int n=s.size(),j,a=0;
        for(int i=0;i<=n;i++)
        {
            if(s[i]==' '||s[i]=='\0')
            {
                j=i-1;
                while(a<j)
                    swap(s[a++],s[j--]);
                a=i+1;
            }    
        }
        return s;
    }
};
