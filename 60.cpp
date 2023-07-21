class Solution {
public:
    vector<string> perm;
    
    void compute(string num, int n,int i)
    {
        if(i==n)
            perm.push_back(num);
        for(int j=i;j<n;++j)
        {
            swap(num[i],num[j]);
            compute(num,n,i+1);
        }
    }
    
    string getPermutation(int n, int k) {
        string num="";
        int temp=n;
        while(temp)
        {
            num+=temp+'0';
            --temp;
        }
        reverse(num.begin(),num.end());
        
        compute(num,n,0);
        return perm[k-1];
    }
};
