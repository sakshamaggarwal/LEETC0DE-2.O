class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(128,-1);
        int j=0;
        int ans=0;
        int i=0;
        while(i<s.size())
        {
            if(i!=0&&v[s[i]]>=j&&v[s[i]]<i)
                j=v[s[i]]+1;
            ans=max(ans,i-j+1);
            v[s[i]]=i;
            i++;
        }
        return ans;
    }
};
