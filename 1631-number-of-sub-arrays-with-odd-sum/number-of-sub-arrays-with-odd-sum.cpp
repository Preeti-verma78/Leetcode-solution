class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        long long mod = 1e9 + 7; 
        int n = nums.size();
        long long odd = 0; 
        long long pre =0; 
        for(int i=0; i<n; i++){
            pre += nums[i];
            if(pre%2)odd++;
        }
        return (odd * (n-odd+1))%mod;
        
    }
};