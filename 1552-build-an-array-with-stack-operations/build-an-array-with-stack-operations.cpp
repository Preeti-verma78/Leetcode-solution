class Solution {
public:
    vector<string> buildArray(vector<int>& x, int n) {
        vector<string>a;
        int b =1;
        for( auto y: x){
            while(b<y){
                a.push_back("Push");
                a.push_back("Pop");
                b++;
            }
            a.push_back("Push");
            b++;
        }
        return a;
        
    }
};