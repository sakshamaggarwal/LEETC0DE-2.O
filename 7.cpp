class Solution {
public:
    int reverse(int x) {
    
    signed int sum=0,a;
    bool isn=false;
    if(x<0)
        isn=true;
    x=abs(x);
    while(x>0)
    {
        a=x%10;
        if(sum>(INT_MAX-a)/10)
            return 0;
        sum=sum*10+a;
        x/=10;
    }
    if(isn)
        sum*=-1;
    return sum;
    }
};
