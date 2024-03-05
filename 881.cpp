class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        int i=0;
        int ans=0;
        sort(people.begin(),people.end());
        
        while(i<n)
        {
            if(people[i]+people[n-1]<=limit)
            {
                ++i;
                --n;
            }
            else
                --n;
            ++ans;
        }
        return ans;
    }
};
