class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int N= nums.size();
        for(int i =1; i<N; i++){
            if(nums[i]==nums[i-1]) return true;
        }
        return false;
    }
};