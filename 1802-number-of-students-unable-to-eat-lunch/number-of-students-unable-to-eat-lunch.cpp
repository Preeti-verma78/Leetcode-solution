class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int>counts(2,0);
        for(int student : students) counts[student]++;
        int remain = sandwiches.size();
        for(int sandwich : sandwiches){
            if(counts[sandwich] ==0)break;
            if(remain == 0) break;
            counts[sandwich]--;
            remain--;
        }
        return remain;
        
    }
};