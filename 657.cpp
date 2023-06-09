class Solution {
public:
    bool judgeCircle(string moves) {
        int v=0,h=0;
        for(char c : moves)
        {
            if(c=='U')
                ++v;
            else if(c=='D')
                --v;
            else if(c=='L')
                --h;
            else
                ++h;
        }
        if(h==0&&v==0)
            return true;
        return false;
    }
};
