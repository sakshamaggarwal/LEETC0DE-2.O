class Solution {
public:
    string removeDuplicates(string s) {
        
        int i=0, n=s.size();
        for(int j=1;j<n;j++)
        {
            if(i<0||s[i]!=s[j])
            {
                i++;
                s[i]=s[j];
            }
            else
                i--;
        }
        return s.substr(0,i+1);
    }
};

// Using extra string and then - pop and push :
// class Solution {
// public:
//     string removeDuplicates(string s) {
        
//         string ans="";
//         for(char c:s)
//         {
//             if(ans.size()>0&&c==ans.back())
//                 ans.pop_back();
//             else
//                 ans.push_back(c);
//         }
//         return ans;
//     }
// };

// USing Stack :
// class Solution {
// public:
//     string removeDuplicates(string s) {
        
//         stack<char> check;
//         for(char c:s)
//         {
//             if(check.empty())
//                 check.push(c);
//             else if(check.top()==c)
//                 check.pop();
//             else
//                 check.push(c);
//         }
//         s="";
//         while(!check.empty())
//         {
//             s+=check.top();
//             check.pop();
//         }
//         reverse(s.begin(),s.end());
//         return s;
//     }
// };
