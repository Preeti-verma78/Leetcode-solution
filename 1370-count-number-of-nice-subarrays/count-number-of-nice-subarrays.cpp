
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }

    int atMost(vector<int>& nums, int k) {
        int j = 0, odd = 0, total = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0)
                odd++;
                while (odd > k) {
                if (nums[j] % 2 != 0)
                    odd--;
                j++;
            }
            total += i - j + 1;
        }

        return total;
    }
};
