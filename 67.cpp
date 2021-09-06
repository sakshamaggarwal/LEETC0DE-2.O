// This solution is without sing extra space. We can do easily by taking an extra vector.
class Solution {
public:
    string addBinary(string a, string b) {
        
        int first=a.size();
        int second=b.size();
        if(first<second)
            return addBinary(b,a);
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        int i=0;
        bool carry=false;
        while(i<first)
        {
            if(second<=i)
            {
                break;
            }
            if(b[i]=='1'&&a[i]=='1')
            {
                if(carry)
                {
                    a[i]='1';
                }
                else
                {
                    carry=true;
                    a[i]='0';
                }
            }
            else if(b[i]=='0'&&a[i]=='0')
            {
                if(carry)
                {
                    a[i]='1';
                    carry=false;
                }
                else
                    a[i]='0';
            }
            else 
            {
                if(carry)
                    a[i]='0';
                else
                    a[i]='1';
            }
            i++;
        }
        
        while(carry&&i<first)
            if(carry)
                if(a[i]=='0')
                {
                    a[i]='1';
                    carry=false;
                    break;
                }
                else
                    a[i++]='0';
        
        if(carry&&i>=first)
            a+='1';
        reverse(a.begin(),a.end());
        return a;
    }
};  
