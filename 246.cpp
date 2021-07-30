class Solution {
public:
    bool isStrobogrammatic(string num) {
        
        int n=num.size()-1,i=0;
        while(i<=n)
        {
            if(num[i]=='6'&&num[n]=='9')
            {
                i++;
                n--;
            }
            else if(num[i]=='1'&&num[n]=='1')
            {
                i++;
                n--;
            }
            else if(num[i]=='8'&&num[n]=='8')
            {
                i++;
                n--;
            }
            else if(num[i]=='9'&&num[n]=='6')
            {
                i++;
                n--;
            }
            else if(num[i]=='0'&&num[n]=='0')
            {
                i++;
                n--;
            }
            else
                return false;
            
        }
        return true;
    }
};
