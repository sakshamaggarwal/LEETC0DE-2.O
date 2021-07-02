class Solution {
public:
    bool isPalindrome(int x) {
        
        long int b=0,n=x;
        while(x>0)
        {
            b=b*10+a;
            x/=10;
        }
        if(n==b)
            return true;
        return false;
    }
};
