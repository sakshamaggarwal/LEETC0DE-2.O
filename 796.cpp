class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1=s.size();
        int n2=goal.size();
        if(n1!=n2)
            return false;
        for(int i=0;i<n1;++i)
        {
            if(s.substr(i,n1)+s.substr(0,i)==goal)
                return true;
        }
        return false;
    }
};

// Using Queues : 
// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         queue<int> a,b;
//         for(char c :s)
//             a.push(c);

//         for(char c : goal)
//             b.push(c);
        
//         for(char c : goal)
//         {
//             if(a==b)
//                 return true;
//             char temp=a.front();
//             a.pop();
//             a.push(temp);
//         }
//         return false;
//     }
// };
