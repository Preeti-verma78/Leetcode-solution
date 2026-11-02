class Solution {
public:
    int n , m;
    bool wow(vector<vector<char>>&board, string& word, int r, int c, int idx){
        if(idx == word.size())return true;
        if(r<0 || c<0|| r>=m || c>=n)return false;
        if(board[r][c] != word[idx])return false;

        char saved = board[r][c];
        board[r][c] = '#';
        bool found = wow(board, word, r+1, c, idx+1)||wow(board, word, r-1, c, idx+1)||wow(board, word, r, c+1, idx+1)||wow(board, word, r, c-1, idx+1);

        board[r][c] = saved;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for(int r=0; r<m; r++){
            for(int c =0; c<n; c++){
                if(wow(board, word, r, c, 0))return true;
            }
        }
        return false;


        
    }
};