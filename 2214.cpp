class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        int n=damage.size();
        int temp=0;
        int maxi=0;
        long int sum=1;
        for(int i=0;i<n;++i)
        {
            if(temp!=1&&damage[i]==armor)
            {
                temp=1;
                continue;
            }
            sum+=damage[i];
            maxi=max(maxi,damage[i]);
        }
        if(temp==1)
            return sum;
        return sum-min(armor,maxi);
    }
};
