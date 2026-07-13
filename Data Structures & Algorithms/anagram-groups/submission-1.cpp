class Solution {
public:
    bool validAnagram(string t, string s){
        unordered_map<char, int> freq;
        for(char c : t) freq[c]++;

        for(char c: s){
            if(freq[c]==0) return false;
            freq[c]--;
        }
        return true;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if(strs.size()==0) return ans;
        ans.push_back({strs[0]});
        if(strs.size()==1) return ans;
        bool flag = false;
        for(int j=1; j<strs.size(); j++){
            flag= false;
            for(int i=0; i<ans.size(); i++){
                if(validAnagram(ans[i][0], strs[j]) && validAnagram(strs[j], ans[i][0])){
                 ans[i].push_back(strs[j]);
                 flag= true;
                }
                if(flag) break;
            }
            if(!flag) ans.push_back({strs[j]});
        }
        return ans;
    }
};
