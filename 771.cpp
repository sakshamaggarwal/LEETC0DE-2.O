class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int n=stones.size(),ans=0;
        unordered_map<int,int> m;
        for(int i:jewels)
            m[i]++;
        for(int i: stones)
            if(m[i])
                ans++;
        return ans;
    }
};
