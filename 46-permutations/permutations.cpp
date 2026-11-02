class Solution {
public:
    vector<vector<int>>ans;
    vector<int>path;
    void sub(vector<int>&nums, vector<int>&used){
        if(path.size() == nums.size()){
            ans.push_back(path);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(used[i])continue;

            path.push_back(nums[i]);
            used[i] = 1;
            sub(nums, used);
            path.pop_back();
            used[i]=0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        ans.clear();
        path.clear();
        vector<int>used(nums.size(), 0);
        sub(nums,used);
        return ans;
        
    }
};