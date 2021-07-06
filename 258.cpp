class Solution {
public:
    int call(int num)
    {
        int a=0;
        while(num>0)
        {
            a+=num%10;
            num/=10;
        }
        return a;
    }
    int addDigits(int num) {
        
        while(num/10>0)
        {
            num=call(num);
        }
        return num;
    }
};
// return 1 + (num - 1) % 9;
