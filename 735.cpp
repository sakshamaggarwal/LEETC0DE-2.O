class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int> st;

        for(int i=0;i<n;++i)
        {
            while(!st.empty()&&asteroids[i]<0&&st.top()>0&&abs(asteroids[i])>st.top())
                st.pop();
            
            if(!st.empty()&&st.top()==-asteroids[i]&&asteroids[i]<0)
                st.pop();
            else if(st.empty()||asteroids[i]>0||st.top()<0)
                st.push(asteroids[i]);
        }

        vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;--i)
        {
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};
