class Solution {
public:
    int pivotInteger(int n) {
        int sum =0; 
        for(int i =1; i<=n ; i++){
            sum += i;

        }
        int xx =0, val =0; 
        for(int i =1; i<=n; i++){
            xx += i;
            val = sum +i -xx;
            if(xx == val){
                return i;
            }
        }
        return -1;
        
    }
};