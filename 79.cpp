class Solution {
public:
    bool check(vector<vector<char>> & board,int n,int m,int i, int j, string word)
    {
        if(word.size()==0)
            return true;
        
        if( i >=n || j >= m || i<0 || j<0 )
            return false;
        else if(board[i][j]==word[0])
        {
            char c=board[i][j];
            board[i][j]='.';
            if ( check(board,n,m,i+1,j,word.substr(1)) || check(board,n,m,i-1,j,word.substr(1)) || check(board,n,m,i,j+1,word.substr(1)) || check(board,n,m,i,j-1,word.substr(1)) )
                return true;
            board[i][j]=c;
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(board[i][j]==word[0])
                {
                    if(check(board,n,m,i,j, word))
                        return true;
                }
            }
        }
        return false;
    }
};
