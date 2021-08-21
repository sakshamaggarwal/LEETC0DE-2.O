class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        reverse(num.begin(),num.end());
        int n=num.size(),a=0,carry=0;
        for(int i=0;i<n;i++)
        {
            a=0;
            if(k)
            {
                a=k%10;
                k/=10;
            }
            if(carry)
            {
                a++;
                carry--;
            }
            if(num[i]+a>9)
                carry++;
            num[i]=(num[i]+a)%10;
        }
        if(carry&&k)
            k++;
        else if(carry)
            num.push_back(1);
        if(k)
        {
            while(k)
            {
                a=k%10;
                k/=10;
                num.push_back(a);
            }
        }
        reverse(num.begin(),num.end());
        return num;
    }
};
