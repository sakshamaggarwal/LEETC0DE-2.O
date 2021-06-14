class Solution {
public:
    int cal(int n,int a,int b,int c)
    {
        if(n==0)
            return a+b+c;
        return cal(n-1,b,c,a+b+c);
    }
    int tribonacci(int n) {
        if(n==0)
            return n;
        else if(n<=2)
            return 1;
        return cal(n-3,0,1,1);
    }
};
