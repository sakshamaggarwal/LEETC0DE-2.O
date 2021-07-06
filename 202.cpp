class Solution {
public:
    int call(int n)
    {
        int sum=0,a=0;
        while(n>0)
        {
            a=n%10;
            sum+=a*a;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        
        map<int,int> m;
        while(n!=1)
        {
            n=call(n);
            m[n]++;
            if(m[n]>1)
                return false;
        }
        return true;
    }
};
