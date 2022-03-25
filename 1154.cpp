class Solution {
public:
    int dayOfYear(string date) {
        int year=0,month=0,day=0;
        for(int i=0;i<4;++i)
            year=year*10+(date[i]-'0');
        
        month=(date[5]-'0')*10+date[6]-'0';
        if(month>2&&(year%400==0||(year%4==0&&year%100!=0)))
            day++;
        switch(month)
        {
            case 12: day+=30;
            case 11: day+=31;
            case 10: day+=30;
            case 9: day+=31;
            case 8: day+=31;
            case 7: day+=30;
            case 6: day+=31;
            case 5: day+=30;
            case 4: day+=31;
            case 3: day+=28;
            case 2: day+=31;
                break;
        }
        day+=10*(date[8]-'0')+date[9]-'0';
        return day;
    }
};

// class Solution {
// public:
//     int dayOfYear(string date) {
//         int year=stoi(date.substr(0,4));
//         int month=stoi(date.substr(5,7));
//         int day=stoi(date.substr(8,10));
//         //int y=stoi(year);
//         //return y;
//         switch(month)
//         {
//             case 12: day+=30;
//             case 11: day+=31;
//             case 10: day+=30;
//             case 9: day+=31;
//             case 8: day+=31;
//             case 7: day+=30;
//             case 6: day+=31;
//             case 5: day+=30;
//             case 4: day+=31;
//             case 3: day+=(year%400==0||(year%4==0&&year%100!=0)) ? 29 : 28;
//             case 2: day+=31;
//                 break;
//         }
//         return day;
//     }
// };
