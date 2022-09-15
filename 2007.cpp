class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        sort(changed.begin(),changed.end());
        unordered_map<int,int> m;
        vector<int> ans;
        
        for(int i=changed.size()-1;i>=0;--i)
        {
            ++m[changed[i]];
            if(m[changed[i]*2])
            {
                ans.push_back(changed[i]);
                --m[changed[i]];
                --m[changed[i]*2];
            }
        }
        
        for(int i : changed)
            if(m[i])
                return {};
        return ans;
    }
};
