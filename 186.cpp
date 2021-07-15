class Solution {
public:
    void reverseWords(vector<char>& s) {
        
        int n=s.size(),k=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                reverse(s.begin()+k,s.begin()+i);
                k=i+1;
            }
            if(i==n-1)
                reverse(s.begin()+k,s.begin()+i+1);
        }
    }
};
