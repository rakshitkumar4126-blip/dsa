class Solution {
public:
    int minMoves(vector<int>& nums){
        int ans=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mini=INT_MAX;
        if(nums[0]==nums[n-1]){
            return 0;
        }
        
        for(int i=0;i<n;i++){
            ans+=nums[i];
            mini=min(mini,nums[i]);
        }
        return ans-1LL*n*mini;
    }
};