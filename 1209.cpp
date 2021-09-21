class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<int> box;
        int n=s.size(),j=0;
        for(int i=0;i<n;i++,j++)
        {
            s[j]=s[i];
            if(j==0||s[j]!=s[j-1])
                box.push(1);
            else if(++box.top()==k)
            {
                box.pop();
                j-=k;
            }
        }
        return s.substr(0,j);
    }
};


// class Solution {
// public:
//     string removeDuplicates(string s, int k) {
        
//         stack<int> box;
//         int n=s.size();
//         for(int i=0;i<n;i++)
//         {
//             if(i==0||s[i]!=s[i-1])
//                 box.push(1);
//             else if(++box.top()==k)
//             {
//                 box.pop();
//                 s.erase(i-k+1,k);
//                 i-=k;
//             }
//         }
//         return s;
//     }
// };

// TLE : 
// class Solution {
// public:
//     string removeDuplicates(string s, int k) {
        
//         int a=0;
//         for(int i=1;i<s.size();)
//         {
//             a=i-1;
//             if(s[i]==s[i-1])
//             while(i<s.size()&&s[i]==s[i-1])
//             {
//                 if(i-a+1==k)
//                 {
//                     s.erase(a,k);
//                     i=1;
//                     break;
//                 }
//                i++;
//             }
//             else
//                 i++;
//         }
//         return s;
//     }
// };
