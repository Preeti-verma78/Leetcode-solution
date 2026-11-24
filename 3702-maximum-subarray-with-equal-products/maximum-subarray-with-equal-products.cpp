class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size(), ans =0; 
        for(int i =0; i<n; i++){
            int g = nums[i], lc = nums[i];
            double inv = 1.0/nums[i];


            for(int j =i; j<n; j++){
                if(j>i){
                    g = gcd(g, nums[j]);
                    lc = lcm(lc, nums[j]);
                    inv /= nums[j];
                }
                if(g * 1LL * lc * inv >0.9999999)ans = max(ans , j - i+1);
            }
        }
        return ans;

        
    }
};