class Solution {
public:
    int maximum69Number (int num) {
        int a=0;
        int ans=0;
        int k=num;
        while(num)
        {
            int temp=pow(10,a++);
            if(num%10==6)
                ans=temp*3;
            num/=10;
        }
        return k+ans;
    }
};
// Or convert to string and do..
