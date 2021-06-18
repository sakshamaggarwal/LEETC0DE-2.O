class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int i=num1.size()-1,j=num2.size()-1;
        int sum,carry=0;
        string v="";
        while(i>=0||j>=0)
        {
            if(i>=0&&j>=0)
                sum=num2[j]-'0'+ num1[i]-'0';
            else if(i>=0)
                sum=num1[i]-'0';
            else
                sum=num2[j]-'0';
            if(carry==1)
            {
                carry=0;
                sum++;
            }
            if(sum>9)
                carry=1;
            v+=(sum%10+'0');
            i--;
            j--;
        }
        if(carry==1)
            v+="1";
        reverse(v.begin(),v.end());
        return v;
    }
};
