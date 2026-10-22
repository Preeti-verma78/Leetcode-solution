class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            if(i<n-1 && nums[i] == nums[i+1]) continue;
            return nums[i];
        }
        return -1;
        
    }
};