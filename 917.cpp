class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.size()-1;
        int i=0;

        while(i<n)
        {
            while(i<n && s[i]<65 || (s[i]>90 && s[i]<97 || s[i]>122))
                ++i;
            while(i<n && s[n]<65 || (s[n]>90 && s[n]<97 || s[n]>122))
                --n;
            
            if(i<n)
                swap(s[i++],s[n--]);
        }
        return s;
    }
};
