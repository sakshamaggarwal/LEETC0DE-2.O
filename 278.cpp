// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long int i=0,m;
        while(i<n)
        {
            m=((i+n)+1)/2;
            if(isBadVersion(m)&&!isBadVersion(m-1))
                return m;
            else if(!isBadVersion(m))
            {
                i=m;
            }
            else
                n=m;
        }
        return m;
    }
};
