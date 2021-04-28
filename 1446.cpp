class Solution {
public:
    int maxPower(string s) {
        
        int n=s.size(),i=0,ans=1,k=1;
        
        while(i<n-1)
        {
            k=1;
            while(i<n-1 && s[i]==s[i+1])
            {
                k++;
                i++;
            }
            ans=max(k,ans);
            i++;
        }
        return ans;
    }
};
