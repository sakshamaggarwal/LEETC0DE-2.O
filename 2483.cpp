class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        long no=0;
        long yes=0;
        int i=0;
        while(i<n)
        {
            if(customers[i]=='Y')
               ++yes;
            ++i;
        }
        i=0;
        int penalty=yes;
        int ans=0;
        while(i<n)
        {
            if(customers[i]=='N')
            {
                no++;
            }
            else
            {
                yes--;
            }
            if(penalty>yes+no)
            {
                penalty=yes+no;
                ans=i+1;
            }
            ++i;
        }
        return ans;
    }
};
