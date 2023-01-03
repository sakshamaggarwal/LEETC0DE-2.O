class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int k=strs[0].size();
        int ans=0;
        map<int,bool> m;
        for(int i=0;i<k;++i)
        {
            for(int j=1;j<n;++j)
            {
                if(strs[j][i]<strs[j-1][i]&&!m[i])
                {
                    ans++;
                    m[i]=true;
                }
            }
        }
        return ans;
    }
};
