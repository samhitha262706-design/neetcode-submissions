class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0; i<k; i++){
           auto maxPairIt = max_element(
            freq.begin(), 
            freq.end(),
            [](const auto& p1, const auto& p2) {
              return p1.second < p2.second;
            }
           ); 
           ans.push_back(maxPairIt->first);
           maxPairIt->second=0;
        
        }
        return ans;

    }
};
