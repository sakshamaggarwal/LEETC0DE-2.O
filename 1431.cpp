class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> v;
        int n=candies.size(),a=0;
        for(int i=0;i<n;i++)
        {
            a=max(a,candies[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=a)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};
