class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1, n= nums.size();
        int nz=0;
        for(int num : nums){
            prod*=num;
            if(num==0) nz++;
        }
        vector<int> output(n,0);
        if(nz>1) return output;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                output[i]=1;
                 for(int j=0; j<n; j++){
                    if(i==j) continue;
                    output[i]*=nums[j];
                 }
                 return output;
            }
            output[i]= prod/nums[i];
        }
        return output;
    }
};
