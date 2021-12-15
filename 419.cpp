class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int ans=0;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='X')
                {
                    ans++;
                    board[i][j]='.';
                    int k=j+1;
                    while(k<board[0].size()&&board[i][k]=='X')
                        board[i][k++]='.';
                    k=i+1;
                    while(k<board.size()&&board[k][j]=='X')
                        board[k++][j]='.';
                }
            }
        }
        return ans;
    }
};
