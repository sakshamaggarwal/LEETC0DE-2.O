class Solution {
public:
    int countmines(vector<vector<char>> board, int a,int b)
    {
        int mines=0;
        for(int i=a-1;i<a+2;i++)
            for(int j=b-1;j<b+2;j++)
                if(i>=0&&j>=0&&i<board.size()&&j<board[0].size()&&board[i][j]=='M')
                    mines++;
        return mines;
    }
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        int a=click[0];
        int b=click[1];
        if(board[a][b]=='M')
            board[a][b]='X';
        else
        {
            int num=countmines(board,a,b);
            if(num)
                board[a][b]=num+'0';
            else
            {
                board[a][b]='B';
                for(int i=a-1;i<a+2;i++)
                    for(int j=b-1;j<b+2;j++)
                        if(i>=0&&j>=0&&i<board.size()&&j<board[0].size()&&board[i][j]!='B')
                        {
                            vector<int> clk{i,j};
                            updateBoard(board,clk);
                        }
            }
        }
        return board;
    }
};
