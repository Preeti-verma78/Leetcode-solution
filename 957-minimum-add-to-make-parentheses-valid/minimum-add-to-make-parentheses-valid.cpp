class Solution {
public:
    int minAddToMakeValid(string s) {
        int result =0;
        int count =0; 
        for(char c : s){
            if(c =='('){
                count++;
            }else{
                if(count >0)count--;
                else{
                    result++;
                }
            }
        }
        return result + count;
        
    }
};