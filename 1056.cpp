class Solution {
public:
    bool valid(int a)
    {
        if(a==6||a==9||a==0||a==1||a==8)
            return true;
        return false;
    }
    bool confusingNumber(int n) {
        
        int k=0,a,n2=n;
        while(n)
        {
            a=n%10;
            if(valid(a))
            {
                if(a==6)
                    a=9;
                else if(a==9)
                    a=6;
            }
            else
                return false;
            k=k*10+a;
            n/=10;
        }
        if(k==n2)
            return false;
        return true;
    }
};
