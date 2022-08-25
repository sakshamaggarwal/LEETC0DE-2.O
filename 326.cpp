// Recursion :
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        else if(n==1)
            return true;
        else
            return (n%3==0)&&isPowerOfThree(n/3);
    }
};

// Using LOg :
// class Solution {
// public:
//     bool isPowerOfThree(int n) {
//         if(n<=0)
//             return false;
//         double ans=log10(n)/log10(3);
//         return int(ans)==ans;
//     }
// };


// simple dividing :
// class Solution {
// public:
//     bool isPowerOfThree(int n) {
//         double temp=n;
//         while(temp>1.00)
//             temp/=3;
//         if(temp==1.00)
//             return true;
//         return false;
//     }
// };
