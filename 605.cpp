class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int s=flowerbed.size();
        for(int i=0;i<s;i++)
        {
            if(flowerbed[i]==0)
            {
                if(i==0||flowerbed[i-1]==0)
                {
                    if(i==s-1||flowerbed[i+1]==0)
                    {
                        n--;
                        i++;
                    }
                }
            }
            if(n<=0)
                return true;
        }
        return false;
    }
};

// counting 3 zeros and n-- :
// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
//         int k=1;
//         for(int i:flowerbed)
//         {
//             if(i==0)
//                 k++;
//             else
//                 k=0;
//             if(k==3)
//             {
//                 n--;
//                 k-=2;
//             }
//             if(n<=0)
//                 return true;
//         }
//         if(k==2&&n==1)
//             return true;
//         return false;
//     }
// };


// using 2 bools :
// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
//         int s=flowerbed.size(),i=0;
//         bool left,right;
//         for(int i=0;i<s;i++)
//         {
//             left=false;
//             right=false;
//             if(!flowerbed[i])
//             {
//                 if(i==0||!flowerbed[i-1])
//                     left=true;
//                 if(i==s-1||!flowerbed[i+1])
//                     right=true;
//                 if(left&&right)
//                 {
//                     n--;
//                     i++;
//                 }
//             }
//             if(n<=0)
//                 return true;
//         }
//         return false;
//     }
// };


//Same as first one but same if condition :
// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
//         int s=flowerbed.size();
//         for(int i=0;i<s;i++)
//         {
//             if((flowerbed[i]==0)&&(i==0||flowerbed[i-1]==0)&&(i==s-1||flowerbed[i+1]==0))
//             {
//                 n--;
//                 i++;
//             }
//             if(n<=0)
//                 return true;
//         }
//         return false;
//     }
// };
