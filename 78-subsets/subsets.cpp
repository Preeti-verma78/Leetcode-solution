class Solution {
public:
    vector<vector<int>>ans;
    vector<int>path; 
    void sub(int i, vector<int>nums){
        if(i==nums.size()){
            ans.push_back(path);
            return ;
        }
        path.push_back(nums[i]);
        sub(i+1, nums);

        path.pop_back();
        sub(i+1, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        path.clear();
        sub(0,nums);
        return ans;
       
        
    }
};