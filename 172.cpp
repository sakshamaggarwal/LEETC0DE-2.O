class Solution {
public:
    int trailingZeroes(int n) {
        
        int a=0;
        while(n>0)
        {
            n/=5;
            a+=n;   
        }
        return a;
    }
};
