class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        int maxi=0;
        vector<int> v(26,0);
        for(char c:s)
        {
            v[c-'a']++;
            if(v[c-'a']>v[maxi])
                maxi=c-'a';
        }
        if(v[maxi]*2-1>n)
            return "";
        int i=0;
        while(v[maxi])
        {
            s[i]=maxi+'a';
            i+=2;
            v[maxi]--;
        }
        for(int j=0;j<26;j++)
            while(v[j])
            {
                if(i>=n)
                    i=1;
                s[i]=j+'a';
                i+=2;
                v[j]--;
            }
        
        return s;
    }
};
