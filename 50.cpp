class Solution {
public:
    double helper(double x, long long n)
    {
// Base :     
        if(x==0)
            return 0;
        if(n==0)
            return 1;

// Negative :
        if(n<0)
        {
            n=n*-1;
            x=1/x;
        }

        double ans=1;

// Loop :
        while(n)
        {

// Odd Power :
            if(n%2)
            {
                ans*=x;
                n-=1;
            }

            x=x*x;
            n/=2;
        }
/*
        if(n%2)
            return x*helper(x*x,(n-1)/2);
        else
            return helper(x*x,n/2);
*/
        return ans;
    }

    double myPow(double x, int n) {
        return helper(x,(long long) n); // Important : type casting 
    }
};
