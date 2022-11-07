class Solution {
public:
    int modu=pow(10,9)+7;
    int getCount(int n)
    {
        int ans=0;
        for(int i=2;i<=n;++i)
        {
            bool t=true;
            for(int j=2;j*j<=i;++j)
            {
                if(i%j==0)
                {
                    t=false;
                    break;
                }
            }
            if(t)
                ans++;
        }
        return ans;
    }
    long long fact(int num)
    {
        if(num<=1)
            return 1;
        return (fact(num-1)*num)%modu;
    }
    int numPrimeArrangements(int n) {
        
        int primes=getCount(n);
        int nonprimes=n-primes;
        long long k=fact(primes)%modu*fact(nonprimes)%modu;
        return k%modu;
    }
};
