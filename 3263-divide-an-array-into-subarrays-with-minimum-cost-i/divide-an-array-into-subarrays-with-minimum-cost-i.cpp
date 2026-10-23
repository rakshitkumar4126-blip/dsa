class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans=nums[0];
        sort(nums.begin(),nums.end());
        if(ans==nums[0]){
            return ans+nums[1]+nums[2];
        }
        else if(ans==nums[1]){
            return ans+nums[0]+nums[2];

        }
        else{
           return ans+nums[0]+nums[1];
        }
        
    }
};