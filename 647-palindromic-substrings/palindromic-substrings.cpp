class Solution {
public:
    int countSubstrings(string s) {
        int len = s.length(), ans =0;
        for(int i=0; i<len; i++){
            int j=i-1, k=i;
            while(k<len-1 && s[k] == s[k+1])k++;
            ans += (k-j)*(k-j+1)/2, i=k++;
            while(~j && k<len && s[k++] == s[j--])ans++;

        }
        return ans;
        
    }
};