class Solution {
public:
    vector<vector<int>>ans;
    vector<int>path;

    void com(int x, int n, int k){
        if(path.size() == k){
            ans.push_back(path);
            return;
        }
        for(int i = x;i<=n; i++){
            path.push_back(i);
            com(i+1, n, k);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        ans.clear();
        path.clear();
        com(1, n, k);
        return ans;

        
    }
};