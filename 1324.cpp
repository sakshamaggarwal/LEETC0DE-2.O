class Solution {
public:
    string rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(' ');
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}
    
    vector<string> printVertically(string s) {
        
        stringstream str(s);
        vector<string> vec;
        
        int i=0,ss=0;
        for(string k;str>>k;++i)
        {
            if(k.size()>ss)
                ss=k.size();
            vec.push_back(k);
        }
        int n=vec.size();
        
        vector<string> ans;
        string temp;
        for(int i=0;i<ss;++i)
        {
            temp="";
            for(int j=0;j<n;++j)
            {
                if(vec[j].size()>i)
                    temp+=vec[j][i];
                else
                    temp+=' ';  
            }
            ans.push_back(rtrim(temp));
        }
        return ans;
    }
};
