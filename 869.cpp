class Solution {
public:
    vector<int> helper(int n)
    {
        vector<int> temp(10,0);
        while(n)
        {
            temp[n%10]+=1;
            n/=10;
        }
        return temp;
    }
    
    // function not called.
    bool check(vector<int> a,vector<int> b)
    {
        for(int i=0;i<10;++i)
            if(a[i]!=b[i])
                return false;
        return true;
    }
    
    bool reorderedPowerOf2(int n) {
        vector<int> temp1(10,0);
        temp1=helper(n);
        vector<int> temp2(10,0);
        
        for(int i=0;i<31;++i)
        {
            temp2=helper(pow(2,i));
            if(temp1==temp2)        //Check function can be called here
                return true;
        }
        return false;
    }
};
