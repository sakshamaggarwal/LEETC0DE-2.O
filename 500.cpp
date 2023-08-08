class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        map<char, int> m{
        {'q', 1},
        {'w', 1},
        {'e', 1},
        {'r', 1},
        {'t', 1},
        {'y', 1},
        {'u', 1},
        {'i', 1},
        {'o', 1},
        {'p', 1},

        {'a', 2},
        {'s', 2},
        {'d', 2},
        {'f', 2},
        {'g', 2},
        {'h', 2},
        {'j', 2},
        {'k', 2},
        {'l', 2},

        {'z', 3},
        {'x', 3},
        {'c', 3},
        {'v', 3},
        {'b', 3},
        {'n', 3},
        {'m', 3}
    };

        vector<string> ans;
        for(string s : words)
        {
            char c=s[0];
            if(c<97)
                c+=32;
            int val=m[c];
            int j=0, n=s.size();
            for( ;j<n;++j)
            {
                char c=s[j];
                if(c<97)
                    c+=32;
                if(m[c]!=val)
                    break;
            }
            if(j==n)
                ans.push_back(s);
        }
        return ans;
    }
};
