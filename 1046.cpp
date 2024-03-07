class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int> pq;

        for(int i : stones)
            pq.push(i);
        
        while(pq.size()>1)
        {
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            if(a==b)
                continue;
            else
                pq.push(a-b);
        }
        if(pq.empty())
            return 0;
        return pq.top();
    }
};
