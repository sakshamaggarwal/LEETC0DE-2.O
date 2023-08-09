class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0;
        stack<int> st;
        int n=operations.size();
        for(int i=0;i<n;++i)
        {
            if(operations[i]=="C")
            {
                if(ans)
                    ans=ans-st.top();
                st.pop();
            }
            else if(operations[i]=="D")
            {
                int num=st.top();
                st.push(2*num);
                ans+=2*num;
            }
            else if(operations[i]=="+")
            {
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.push(num1);
                st.push(num1+num2);
                ans+=num1+num2;
            }
            else
            {
                int num=stoi(operations[i]);
                st.push(num);
                ans+=num;
            }
        }
        return ans;
    }
};
