class Solution {
public:
    int findComplement(int num) {
        string s="";        // or store in vector<int>
        while(num>0)
        {
            int a=num%2;
            num/=2;
            s+=a+'0';
        }
        num=0;
        int i=0;
        for(char c  : s)
        {
            if(c=='0')
            {
                num+=pow(2,i++);
            }
            else
                ++i;
        }
        return num;        
    }
};
