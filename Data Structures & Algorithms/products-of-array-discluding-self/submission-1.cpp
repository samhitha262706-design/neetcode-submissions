class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1, n= nums.size();
        int nz=0,z=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
               z=i;
               nz++;
               continue;
            } 
            prod*=nums[i];
        }
        vector<int> output(n,0);
        if(nz>1) return output;
        if(nz==1){
            output[z]=prod;
            return output;
        }
        for(int i=0; i<n; i++){
            output[i]= prod/nums[i];
        }
        return output;
    }
};
