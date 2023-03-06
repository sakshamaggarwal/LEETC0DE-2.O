class Solution {
public:
    string removeKdigits(string num, int k) {
        
        int n=num.size();
        string s="";
        for(int i=0;i<n;++i)
        {
            while(s.size()&&s.back()>num[i]&&k)
            {
                s.pop_back();
                --k;
            }
            if(s.size()||num[i]!='0')
                s.push_back(num[i]);
        }
        while(s.size()&&k--)
            s.pop_back();
        if(s.size()==0)
            return "0";
        return s;
    }
};
