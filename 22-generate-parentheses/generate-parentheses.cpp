class Solution {
public:
    vector<string>ans;
    void slove(string curr, int open, int close , int n){
        if(curr.size() == 2*n){
            ans.push_back(curr);
            return;
        }
        if(open<n){
            slove(curr + "(" , open+1, close , n);
        }
        if(close<open){
            slove(curr + ")" , open, close+1, n);
        }
    }
    vector<string> generateParenthesis(int n) {

        slove("", 0, 0, n);
        return ans;
        
    }
};