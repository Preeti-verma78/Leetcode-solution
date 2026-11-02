class Solution {
public:
    vector<vector<int>>ans;
    vector<int>path;
    void sub(int x, vector<int>nums){
        ans.push_back(path);
        for(int i=x; i<nums.size(); i++){
            if(i >x && nums[i] == nums[i-1])continue;

            path.push_back(nums[i]);
            sub(i+1 , nums);
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        ans.clear();
        path.clear();
        sub(0, nums);
        return ans;
        
    }
};