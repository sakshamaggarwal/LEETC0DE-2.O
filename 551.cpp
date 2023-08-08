class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        int n=s.size();
        for(int i=0;i<n;++i)
        {
            if(s[i]=='A')
            {   a++;
                if(a>1)
                    return false;
            }
            else if(s[i]=='L')
            {
                int temp=0;
                while(s[i]=='L')
                {
                    temp++;
                    i++;
                    if(temp>=3)
                        return false;
                }
                --i;
            }
        }
        return true;
    }
};
