class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int a=aliceSizes.size();
        int b=bobSizes.size();

        int sumA=0, sumB=0;
        for(int i : aliceSizes)
            sumA+=i;
        for(int i : bobSizes)
            sumB+=i;

        int diff=(sumB-sumA)/2;

        map<int,int> m;

        for(int i : bobSizes)
        {
            m[i]++;
        }

        for(int i : aliceSizes)
        {
            if(m.find(i+diff)!=m.end())
                return {i,abs(i+diff)};
        }
        return {0,0};
    }
};
