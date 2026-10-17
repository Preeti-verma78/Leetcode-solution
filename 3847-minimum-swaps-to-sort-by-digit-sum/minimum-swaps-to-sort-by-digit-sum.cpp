class Solution {
public:
    int digSum(int n){
        int ans =0; 
        while(n>0){
            ans+=(n%10);
            n/=10;
        }
        return ans;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        map<int,vector<int>>freq;
        for(int i=0; i<n; i++){
            int sum = digSum(nums[i]);
            freq[sum].push_back(nums[i]);
        }
        vector<int>arr;
        for(auto &x : freq){
            sort(x.second.begin(), x.second.end());
            for(int a : x.second){
                arr.push_back(a);
            }
        }
        map<int, int>freq2;
        for(int i=0; i<n; i++){
            freq2[arr[i]] = i;

        }
        int ans =0; 
        vector<bool>passed(n, false);
        for(int i =0; i<n; i++){
            if(passed[i]) continue;
            int g = i, cnt=0;
            while(!passed[g]){
                passed[g] = true;
                g = freq2[nums[g]];
                cnt++;
            }
            ans += (cnt-1);
            
        }
        return ans;
        
    }
};