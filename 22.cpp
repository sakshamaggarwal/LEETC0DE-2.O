class Solution {
public:
    void getPerm(vector<string>& ans, string s, int n, int i)
    {
        if(n==0 && i==0)
            ans.push_back(s);
        if(n>0)
            getPerm(ans,s+'(',n-1,i+1);
        if(i>0)
            getPerm(ans,s+')',n,i-1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        getPerm(ans,"",n,0);
        return ans;
    }
};
