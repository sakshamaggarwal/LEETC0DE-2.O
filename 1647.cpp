class Solution {
public:
    int minDeletions(string s) {
        map<char,int> m;
        for(char c: s)
            m[c]++;
        priority_queue<int> pq;

        for(auto it=m.begin(); it!=m.end();++it)
        {
            pq.push(it->second);
        }
        int n=pq.size();
        int ans=0;

        while(pq.size() > 1)
        {
            int temp=pq.top();
            pq.pop();

            int temp2=pq.top();

            if(temp==temp2 && temp!=0)
            {
                temp--;
                ans++;
                pq.push(temp);
            }
        }
        return ans;
    }
};
