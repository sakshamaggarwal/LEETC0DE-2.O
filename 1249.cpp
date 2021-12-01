class Solution {
public:
    void reverse_function(string& ans)
    {
        int n=ans.size()-1;
        int i=0;
        while(i<=n)
            swap(ans[i++],ans[n--]);
    }
    string minRemoveToMakeValid(string s) {
        int o=0,e=0;
        stack<char> st;
        for(char c:s)
        {
            if(c=='(')
                o++;
            else if(c==')')
                e++;
            if(e>o)
            {
                e--;
                continue;
            }
            else
                st.push(c);
        }
        string ans="";
        int d=o-e;
        while(!st.empty())
        {
            if(d>0&&st.top()=='(')
            {
                d--;
                st.pop();
                continue;
            }
            ans+=st.top();
            st.pop();
        }
        
        reverse_function(ans);
        return ans;
    }
};
