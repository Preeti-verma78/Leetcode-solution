class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int , int>mp;
        int l =0, ans =0; 
        for(int i =0; i<nums.size(); ++i){
            mp[nums[i]]++;
            while(mp.size()>2){
                if(--mp[nums[l]] == 0) mp.erase(nums[l]);
                l++;
            }
            ans = max(ans, i-l +1);
        }
        return ans;

        
    }
};