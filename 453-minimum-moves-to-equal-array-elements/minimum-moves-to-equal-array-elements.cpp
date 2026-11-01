class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = ranges::min(nums), moves=0;
        for(int x : nums) moves += x- mini;
        return moves;
    
        
    }
};