
class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        long long prefix = 0;
        long long odd = 0, even = 1;
        long long count = 0;
        for(int i = 0; i < nums.size(); i++) {
            prefix += nums[i];

            if(prefix % 2 == 1) {
                odd++;
                count += even;
            }
            else {
                even++;
                count += odd;
            }

            count %= 1000000007;
        }
        return count;
    }
};
