class Solution {
public:
    bool digitCount(string num) {
        map<int,int> m;
        int n=num.size();
        
        for(int i=0;i<n;++i)
            m[num[i]-'0']++;
            
        for(int i=0;i<n;++i)
            if(m[i]!=num[i]-'0')
                return false;
        return true;
    }
};
