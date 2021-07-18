class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        int b=0,a=0,l=0,o=0,n=0;
        for(char c:text)
        {
            if(c=='b')
                b++;
            if(c=='a')
                a++;
            if(c=='l')
                l++;
            if(c=='o')
                o++;
            if(c=='n')
                n++;
        }
        return min(b,min(a,min(l/2,min(o/2,n))));
    }
};

// USing MAP
// class Solution {
// public:
//     int maxNumberOfBalloons(string text) {
        
//         map<char,int> m;
//         for(char c:text)
//             m[c]++;
//         return min(m['b'],min(m['a'],min(m['l']/2,min(m['o']/2,m['n']))));
//     }
// };
