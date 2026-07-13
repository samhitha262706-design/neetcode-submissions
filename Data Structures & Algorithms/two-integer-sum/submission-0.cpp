class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            auto it= find(nums.begin(), nums.end(), target-nums[i]);
            if(it != nums.end()){
                int j= distance(nums.begin(),it);
                if(i != j){
                    ans.push_back(i);
                    ans.push_back(j);
                    sort(ans.begin(), ans.end());
                    return ans;
                }
            }
        }
        return ans;
    }
};
