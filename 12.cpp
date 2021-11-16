class Solution {
public:
    string intToRoman(int num) {
        string ans;
        vector<string> roman={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> value={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        while(num)
        {
            for(int i=0;i<13;)
            {
                if(num>=value[i])
                {
                    ans+=roman[i];
                    num-=value[i];
                }
                if(!num)
                    break;
                else if(num<value[i])
                    i++;
            }
        }
        return ans;
    }
};

// Doesn't work(Incomplete)
// class Solution {
// public:
//     string intToRoman(int num) {
//         int k=0;
//         while(num)
//         {
//             a=(k*10)*num%10;
//             switch(a)
//             {
//                 case 4: if(k==0)
//                             ans+='IV';
//                         else if(k==1)
//                             ans+='XL';
//                         else if(k=2)
//                             ans+='CD';
//                     break;
//                 case 9: if(k==0)
//                             ans+='IX';
//                         else if(k==1)
//                             ans+='XC';
//                         else if(k=2)
//                             ans+='CM';
//                     break;
//                 case 1: if(k==0)
//                             ans+='I';
//                         else if(k==1)
//                             ans+='C';
//                         else if(k=2)
//                             ans+='M';
//                     break;
//                 case 5: if(k==0)
//                             ans+='V';
//                         else if(k==1)
//                             ans+='L';
//                         else if(k=2)
//                             ans+='D';
//                     break;
//             }
//         }   
//     }
// };
