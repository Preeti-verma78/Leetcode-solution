class Solution {
public:
    int ans =0;
    void sub(int x, vector<int>nums, int xr){
        
        if(x == nums.size()){
            ans += xr;
            return;
        }
        sub(x+1, nums, xr^nums[x]);
        sub(x+1, nums, xr);

    }
    int subsetXORSum(vector<int>& nums) {
        ans = 0;
        
        sub(0, nums, 0);
        return ans;
        
        
    }
};