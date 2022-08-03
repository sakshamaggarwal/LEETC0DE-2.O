class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> temp;
        for(char c:s)
            if(temp[c])
                return c;
            else
                ++temp[c];
        return temp[temp.size()];
    }
};
