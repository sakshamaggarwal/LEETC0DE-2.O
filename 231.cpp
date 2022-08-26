// Recursion :
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        else if(n==1)
            return true;
        else
            return (n%2==0)&&isPowerOfTwo(n/2);
    }
};

// Using LOg :
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0)
//             return false;
//         double ans=log10(n)/log10(2);
//         return int(ans)==ans;
//     }
// };


// simple dividing :
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         double temp=n;
//         while(temp>1.00)
//             temp/=2;
//         if(temp==1.00)
//             return true;
//         return false;
//     }
// };
