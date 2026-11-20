class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int>dp;
        int maxi =0;
        for(int x:nums){
            int v = dp[x]+1;
            int u = dp[x-1]+1;
            dp[x+1] = max(dp[x+1],v);
            dp[x] = max(dp[x],u);
            maxi = max({maxi, dp[x+1], dp[x]});
        }
        return maxi;
        
    }
};