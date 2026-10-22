class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int i=0;
        
        while(i<n){
            if(nums[i] == target) return true;
            i++;
        }
        return false;
    }
};