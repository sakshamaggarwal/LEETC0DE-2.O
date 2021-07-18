class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.size(),p=0,j;
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                j=i;
                if(p!=0)
                    s[p++]=' ';
                while(i<n&&s[i]!=' ')
                {
                    s[p++]=s[i++];
                }
                reverse(s.begin()+p-(i-j),s.begin()+p);
            }
        }
        s.erase(s.begin()+p,s.end());
        return s;
    }
};



// class Solution {
// public:
//     string reverseWords(string s) {
        
//         vector<string> v;
//         stringstream str(s);
//         string ans;
//         while(str>>ans)
//             v.push_back(ans);
        
//         ans="";
//         reverse(v.begin(),v.end());
        
//         for(auto it:v)
//         {
//             ans+=" ";
//             ans+=it;
//         }
//         ans.erase(0,1);
//         return ans;
//     }
// };
