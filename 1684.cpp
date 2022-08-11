class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> m;
        for(char c:allowed)
            m[c]++;
        int ans=0;
        for(string s: words)
        {
            bool temp=true;
            for(char c : s)
                if(!m[c])
                    temp=false;
            if(temp)
                ans++;
        }
        return ans;
    }
};
