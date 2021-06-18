class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> nums;
        int n=digits.size(),carry=0;
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]!=9&&carry==1)
            {
                digits[i]+=1;
                return digits;
            }
            if((digits[i]!=9)&&(i!=0))
            {
                digits[i]++;
                return digits;
            }
            else if(digits[i]!=9)
                digits[i]+=1;
            else if(digits[i]==9)
            {
                if(carry==0&&i==0)
                {
                    digits[i]=0;
                    digits.insert(digits.begin(),1);
                }
                else if(carry==1&&i==0)
                {
                    digits[i]=0;
                    digits.insert(digits.begin(),1);
                    carry=0;
                }
                else if(carry==0)
                {
                    digits[i]=0;
                    carry=1;
                }
                else
                {
                    digits[i]=0;
                    carry=1;
                }
            }
        }
        return digits;
    }
};
