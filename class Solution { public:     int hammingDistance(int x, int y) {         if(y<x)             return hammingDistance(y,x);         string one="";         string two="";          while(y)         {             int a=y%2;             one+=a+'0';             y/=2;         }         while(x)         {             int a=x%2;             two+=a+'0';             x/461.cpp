class Solution {
public:
    int hammingDistance(int x, int y) {
        if(y<x)
            return hammingDistance(y,x);
        string one="";
        string two="";

        while(y)
        {
            int a=y%2;
            one+=a+'0';
            y/=2;
        }
        while(x)
        {
            int a=x%2;
            two+=a+'0';
            x/=2;
        }
        int n=one.size();

        while(n>two.size())
            two+='0';

        int ans=0;

        for(int i=0;i<n;++i)
        {
            if(one[i]!=two[i])
                ++ans;
        }
        return ans;
    }
};
