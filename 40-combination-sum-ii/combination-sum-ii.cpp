class Solution {
public:
    vector<vector<int>>ans;
    vector<int>path;
    void sub(int x, int target, vector<int>&nums){
        if(target ==0){
            ans.push_back(path);
            return;
        }
        for(int i =x; i<nums.size(); i++){
            if(i>x && nums[i] == nums[i-1])continue;
            if(nums[i]>target)break;
            path.push_back(nums[i]);

            sub(i+1, target- nums[i], nums);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        ans.clear();
        path.clear();
        sub(0, target, nums);
        return ans;
        
    }
};