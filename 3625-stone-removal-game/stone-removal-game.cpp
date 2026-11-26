class Solution {
public:
    bool canAliceWin(int n) {
        int miss = 55-n;
        int upl = lround(sqrt(2*miss));
        return upl%2==1;
        
    }
};