class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word="";
        int n1=word1.size();
        int n2=word2.size();
        int i=0;
        for(int i=0;i<max(n1,n2);++i)
        {
            if(i<n1)
                word.push_back(word1[i]);
            if(i<n2)
                word.push_back(word2[i]);
        }
        return word;
    }
};

// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         string ans=word1+word2;
//         int n1=word1.size();
//         int n2=word2.size();
//         int n=ans.size();
//         int a=0, b=0;

//         for(int i=0;i<n;++i)
//         {
//             if(i%2==0)
//             {
//                 if(a==n1)
//                     ans[i]=word2[b++];
//                 else
//                     ans[i]=word1[a++];
//             }
//             else
//             {
//                 if(b==n2)
//                     ans[i]=word1[a++];
//                 else
//                     ans[i]=word2[b++];
//             }
//         }
//         return ans;
//     }
// };
