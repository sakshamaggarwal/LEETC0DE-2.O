class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int,int> m;
        int ans=0;
        for(int i:arr)
            m[i]++;
        for(int i:arr)
            if(m[i]==i)
                ans=max(ans,i);
        if(ans==0)
            return -1;
        return ans;
    }
};
