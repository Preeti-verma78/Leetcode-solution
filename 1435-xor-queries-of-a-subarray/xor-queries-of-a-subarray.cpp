class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        vector<int>ans;
        for(int i=1; i<arr.size(); i++){
            arr[i] = arr[i]^arr[i-1];
        }
        for(int i=0; i<q.size(); i++){
            int st = q[i][0];
            int end = q[i][1];
            if(st ==0){
                ans.push_back(arr[end]);
            }else{
                ans.push_back(arr[st-1]^arr[end]);
            }
        }
        return ans;
        
    }
};