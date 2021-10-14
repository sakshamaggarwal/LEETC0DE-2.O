class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int nums[101]={0};
        for(vector<int> log:logs)
        {
            nums[log[0]-1950]++;
            nums[log[1]-1950]--;
        }
        int cnt=0,k=0,ans=0;
        for(int i=0;i<101;i++)
        {
            cnt+=nums[i];
            if(cnt>k)
            {
                k=cnt;
                ans=i;
            }
        }
        return ans+1950;
    }
};
