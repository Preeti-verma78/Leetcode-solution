class Solution {
public:
    int getSum(int a, int b) {
        int ans =0;
        int c_in =0;
        for(int i=0; i<32; i++){
            int bit_a = (a & 1);
            int bit_b = (b & 1);
            a >>= 1;
            b >>= 1;
            int bit_ans = bit_a ^ bit_b ^ c_in;
            int c_out = (bit_a & bit_b) | (bit_b & c_in) | (c_in& bit_a);
            ans |= (bit_ans << i);
            c_in = c_out;
        }
       
        return ans;
        
    }
};