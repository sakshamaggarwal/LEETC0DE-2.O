class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int k=0;
        while(n)
        {
            k+=n%2;
            n = n >> 1;
        }
        return k;
    }
};
