class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        if(s.size()%2!=0)
            return false;
        for(char c:s)
        {
            if(c=='(')
                st.push(c);
            else if(c=='[')
                st.push(c);
            else if(c=='{')
                st.push(c);
            else if(st.empty())
                return false;
            else if(st.top()=='('&&c==')')
                st.pop();
            else if(st.top()=='{'&&c=='}')
                st.pop();
            else if(st.top()=='['&&c==']')
                st.pop();
            else
                return false;
        }
        if(!st.empty())
            return false;
        return true;
    }
};
