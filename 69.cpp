class Solution {
public:
    int mySqrt(int x) {

        if(x<=1)
            return x;
        int i=1,j=x,mid;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(mid<x/mid)
                i=mid+1;
            else if(mid==x/mid)
                return mid;
            else
                j=mid-1;
        }
        return j;
    }
};


// class Solution {
// public:
//     int mySqrt(int x) {
        
//         int i=1;
//         while(i<=x/i)
//             i++;
//         return i-1;
//     }
// };
