// Recursion :
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)
            return false;
        else if(n==1)
            return true;
        else
            return (n%4==0)&&isPowerOfFour(n/4);
    }
};

// Using LOg :
// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         if(n<=0)
//             return false;
//         double ans=log10(n)/log10(4);
//         return int(ans)==ans;
//     }
// };


// simple dividing :
// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         double temp=n;
//         while(temp>1.00)
//             temp/=4;
//         if(temp==1.00)
//             return true;
//         return false;
//     }
// };
