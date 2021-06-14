class Solution {
public:
    int cal(int n,int a,int b)
    {
        if(n==0)
            return a+b;
        return cal(n-1,b,a+b);
    }
    int climbStairs(int n) {
        
        if(n<=2)
            return n;
         return cal(n-3,1,2);
    }
};
