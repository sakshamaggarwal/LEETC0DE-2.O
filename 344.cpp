class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n=s.size(),i=0;
        while(i<n)
        {
            swap(s[i++],s[n-1]);
            n--;
        }
    }
};

// // Recursion
// class Solution {
// public:
//     void recu(vector<char>& s, int i, int n)
//     {
//         if(i>=n)
//             return;
//         swap(s[i],s[n-1]);
//         recu(s,i+1,n-1);
//     }
//     void reverseString(vector<char>& s) {
        
//         recu(s,0,s.size());
//     }
// };
