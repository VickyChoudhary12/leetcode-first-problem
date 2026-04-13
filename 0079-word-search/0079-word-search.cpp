class Solution {
public:
    bool possible(vector<vector<char>> &board,string word,int idx,int row,int col,int n,int m){
        if(idx==word.length()){
            return true;
        }
        if(row<0||col<0||row==n||col==m||board[row][col]!=word[idx]){
            return false;
        }

        char c=board[row][col];
        board[row][col]='!';
        bool top=possible(board,word,idx+1,row-1,col,n,m);
        bool right=possible(board,word,idx+1,row,col+1,n,m);
        bool left=possible(board,word,idx+1,row,col-1,n,m);
        bool buttom=possible(board,word,idx+1,row+1,col,n,m);
        board[row][col]=c;
        return top||right||left||buttom;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int idx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[idx]){
                    if(possible(board,word,idx,i,j,n,m)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};