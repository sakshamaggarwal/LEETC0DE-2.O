class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n=words.size();
        map<string,int> m;
        int ans=0;
        for(string s:words)
        {
            if(m[s]>0)
            {
                ans+=4;
                m[s]--;
            }
            else
            {
                string temp="";
                temp+=s[1];
                temp+=s[0];
                m[temp]++;
            }
        }
        for(auto it=m.begin();it!=m.end();++it)
        {
            if(it->second>0&&it->first[0]==it->first[1])
            {
                ans+=2;
                break;
            }
        }
        return ans;
    }
};
