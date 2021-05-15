class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int a=0,p=1,s=0;
        while(n)
        {
            a=n%10;
            p*=a;
            s+=a;
            n/=10;
        }
        return p-s;
    }
};
