class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.size();
        int k=0;
        for(int i=0;i<n;++i)
            if(s[i]==letter)
                k++;
        return (k*100)/n;
    }
};
