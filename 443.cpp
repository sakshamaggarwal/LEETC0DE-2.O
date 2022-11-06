class Solution {
public:
    string toStr(int num)
    {
        string ans="";
        while(num)
        {
            int a=num%10;
            ans+=a+'0';
            num/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int compress(vector<char>& chars) {
        int n=chars.size();
        int j=0,temp=0;
        
        for(int i=0;i<n;++i)
        {
            while(j<n&&chars[i]==chars[j])
                j++;
            chars[temp++]=chars[i];
            if(j-i>1)
            {
                string s=toStr(j-i);        //to_string(j-i)
                for(char c:s)
                    chars[temp++]=c;
            }
            i=j-1;
        }
        return temp;
    }
};
