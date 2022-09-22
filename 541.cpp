class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        int temp=0;
        for(int i=0;i<n;i+=k*2)
        {
            temp=k;
            if(n-i-1<k)
                reverse(s.begin()+i,s.begin()+n);
            else
                reverse(s.begin()+i,s.begin()+i+k);
        }
        return s;
    }
};
