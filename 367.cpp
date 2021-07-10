class Solution {
public:
    bool isPerfectSquare(int num) {
        
        for(long int i=1;i*i<=num;i++)
            if(i*i==num)
                return true;
        return false;
    }
};

// Good Approach(similar complexity) : 
// class Solution {
// public:
//     bool isPerfectSquare(int num) {
        
//         int a=1;
//         while(num>0)
//         {
//             num-=a;
//             a+=2;
//         }
//         return num==0;
//     }
// };


// // TLE
// class Solution {
// public:
//     bool isPerfectSquare(int num) {
        
//         long int m,i=1,j=num;
//         while(i<=j)
//         {
//             m=(i+j)/2;
//             if(m*m<num)
//                 i++;
//             else
//                 j--;
//         }
//         return i*i==num;
//     }
// };
