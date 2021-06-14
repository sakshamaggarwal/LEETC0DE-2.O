class Solution {
public:
    int cal(int n,int a,int b)
    {
        if(n==0)
            return a+b;
         return cal(n-1,b,a+b);
    }
    int fib(int n) {
       
        if(n<=1)
            return n;
        return cal(n-2,0,1);
    }
}; 
