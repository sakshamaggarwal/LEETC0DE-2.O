class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size()+1;
        int k=n;
        map<char,int> m;
        for( char c:t)
            m[c]++;
        
        int c=m.size();
        int j=0;
        int st=1,e=0;
        
        for(int i=0;i<k;++i)
        {
            if(m.find(s[i])!=m.end())
            {
                if(m[s[i]]==1)
                    c--;
                m[s[i]]--;
            }
            if(c==0)
            {
                while(c==0&&i>=j)
                {
                    if(n>i-j+1)
                    {
                        n=i-j+1;
                        st=j;
                        e=i;
                    }
                    if(m.find(s[j])!=m.end())
                    {
                        if(m[s[j]]==0)
                            c++;
                        m[s[j]]++;
                    }
                    j++;
                }
            }
        }
    
    string ans="";
    if(st<=e)
    {
        for(int i=st;i<=e;++i)
        {ans+=s[i];}
    }

    return ans;
    }
};
