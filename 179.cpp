// OR don't take in vector and convert tostring when in comparator and comparea nd store in ans.
class Solution {
public:
    string ToString(int n)
    {
        string k="";
        while(n)
        {
            int a=n%10;
            k+=a+'0';
            n/=10;
        }
        int i=0,p=k.size()-1;
        while(i<p)
            swap(k[i++],k[p--]);
        return k;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(int i:nums)
        {
            if(i==0)
            {
                v.push_back("0");
                continue;
            }
            v.push_back(ToString(i));
        }
        sort(v.begin(),v.end(),[](string& a,string&b){
            return a+b>b+a;
        });
        string ans="";
        if(v[0]=="0")
            return "0";
        for(string s:v)
            ans+=s;
        return ans;
    }
};


// DOes Not Work :
// class Solution {
// public:
//     void StringReverse(string& a)
//     {
//         int i=0;
//         int n=a.size()-1;
//         while(i<=n)
//             swap(a[i++],a[n--]);
//     }
    
//     string ToString(int n)
//     {
//         string temp="";
//         while(n)
//         {
//             temp+=n%10+'0';
//             n/=10;
//         }
//         StringReverse(temp);
//         return temp;
//     }
 
//     string largestNumber(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> temp=nums;
//         for(int i=0;i<n-1;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 string a=to_string(nums[i]);
//                 string b=to_string(nums[j]);
//                 StringReverse(a);
//                 StringReverse(b);
//                 // string a=ToString[nums[i]];
//                 // string b=ToString[nums[j]];
//                 int m=0,n=0;
//                 while(m<a.size())
//                 {
//                     if(a[m++]<b[0])
//                     {
//                         swap(nums[i],nums[j]);
//                         break;
//                     }
//                     else
//                         break;
//                 }
//             }
//         }
//         string ans="";
//         for(int i=0;i<n;i++)
//             ans+=ToString(nums[i]);
//         return ans;
//     }
// };
