class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int>mp;
        for(char ch : s){
            mp[ch]++;

        }
        vector<char>v;
        for(auto it : mp){
            v.push_back(it.first);


        }
        sort(v.begin(), v.end(), [&](char a , char b) {return mp[a]>mp[b]; });
        string ans ="";
        for(char ch : v){
            ans += string(mp[ch], ch);
        }
        return ans;
        
    }
};