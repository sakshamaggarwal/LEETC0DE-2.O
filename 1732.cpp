class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int current=0;
        int maxi=0;
        for(int i=0;i<n;++i)
        {
            current+=gain[i];
            maxi=max(current,maxi);
        }
        return maxi;
    }
};
