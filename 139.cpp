class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();

        vector<bool> check(n,false);

        for(int i=0;i<n;++i)
        {
            for(string word : wordDict)
            {
                int len=word.size();
                if(i<len-1)
                    continue;
                if(i==len-1||check[i-len])
                {
                    if(s.substr(i-len+1,len)==word)
                    {
                        check[i]=true;
                        break;
                    }
                }
            }
        }
        return check[n-1];
    }
};

// 2nd Solution : 
// class Solution {
// public:
//     bool wordBreak(string s, vector<string>& wordDict) {
//         int n=s.size();

//         map<string,int> check;
//         for(string s : wordDict)
//             check[s]++;

//         vector<bool> store(n+1,false);
//         store[0]=true;

//         for(int i=1;i<n+1;++i)
//         {
//             for(int j=i-1;j>=0;--j)
//             {
//                 if(store[j]==true && check.find(s.substr(j,i-j))!=check.end())
//                 {
//                     store[i]=true;
//                     break;
//                 }
//             }
//         }
//         return store[n];
//     }
// };
