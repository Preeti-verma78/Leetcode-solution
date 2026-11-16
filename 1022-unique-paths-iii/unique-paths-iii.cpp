class Solution {
public:
    int m, n;
    int result , nonObs;
    vector<vector<int>>direction{{1,0},{0,1},{-1,0},{0,-1}};
    void backtrack(vector<vector<int>>&grid , int cnt , int i, int j){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j] ==-1)return;
        if(grid[i][j] ==2){
            if(cnt == nonObs)result++;
            return;
        }
        grid[i][j]= -1;
        for(vector<int>&dir : direction){
            int new_i = i+dir[0];
            int new_j = j + dir[1];
            backtrack(grid , cnt+1, new_i, new_j);        
        }
        grid[i][j]=0;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        result =0; 
        nonObs =0; 
        int st_x =0, st_y =0;
        for(int i =0; i<m; i++){
            for(int j =0; j<n; j++){
                if(grid[i][j]==0)nonObs++;
                if(grid[i][j]==1){
                    st_x =i; 
                    st_y = j;

                }
            }
        }
        nonObs += 1;
        int cnt =0; 
        backtrack(grid , cnt, st_x, st_y);
        return result;
        
    }
};