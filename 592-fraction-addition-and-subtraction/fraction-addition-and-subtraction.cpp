class Solution {
public:
    string fractionAddition(string nums) {
        int nan = 0, d=1;
        int i =0;
        int n = nums.size();
        while(i<n){
            int sign = 1;
            if(nums[i] =='+' || nums[i]=='-'){
                if(nums[i]=='-')sign=-1;
                i++;
            }
            int num =0;
            while(i<n && isdigit(nums[i])){
                num = num*10+(nums[i]-'0');
                i++;
            }
            num*=sign;
            i++;
            int den=0;
            while(i<n && isdigit(nums[i])){
                den=den*10+(nums[i]-'0');
                i++;
            }
            nan = nan*den+num*d;
            d*=den;

            int gcdVal= gcd(abs(nan),d);
            nan /= gcdVal;
            d/=gcdVal;
        }
        return to_string(nan)+'/'+to_string(d);
        
    }
};