class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
        return (coordinates[0]-'a'+1+coordinates[1]-'0')%2;
    }
};
// int a=coordinates[0]-'a'+1;
//         int b=coordinates[1]-'0';
//         if((a+b)%2==0)
//             return false;
//         return true;
