class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int i=0;
        while(i<=n)
        {
            int one=0;
            int num=i;
            while(num)
            {
                one+=num%2;
                num/=2;
            }
            ans.push_back(one);
            ++i;
        }
        return ans;
    }
};
