class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        int n=s.size();
        if(n!=goal.size())
            return false;
        int k=0;
        char p,q;                           // store values or store positions and swap...
        unordered_map<char,int> m1,m2;
        bool check=false;
        for(int i=0;i<n;i++)
        {
            m1[s[i]]++;
            m2[goal[i]]++;
            
            if(s[i]!=goal[i])
            {
                if(k==0)
                {
                    k++;
                    q=s[i];
                    p=goal[i];
                }
                else if(s[i]==p&&goal[i]==q)
                    k++;
                else
                    return false;
            }
            if(k>2)
                return false;
            if(s[i]==goal[i]&&m1[s[i]]>1&&m2[s[i]]>1)
                check=true;
        }
        if(k==2)
            return true;
        else if(k==0&&check)
            return true;
        return false;
    }
};
