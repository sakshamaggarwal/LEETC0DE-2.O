class Solution {
public:
    int countPrimes(int n) {
       
        int k=0;
        vector<bool> v(n,true);
        for(int i=2;i*i<n;i++)
            if(v[i])
                for(int j=2*i;j<n;j+=i)
                    v[j]=false;
        for(int i=2;i<n;i++)
            if(v[i])
                k++;
        return k;
    }
};
