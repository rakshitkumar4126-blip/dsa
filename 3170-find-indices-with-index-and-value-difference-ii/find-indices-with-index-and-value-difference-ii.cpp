class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n=nums.size();
        int mn=0;
        int mx=0;
        for(int j=indexDifference;j<n;j++){
            int i=j-indexDifference;
            if(nums[mn]>nums[i]){
                mn=i;
            }
            if(nums[mx]<nums[i]){
                mx=i;
            }
        if(nums[j]-nums[mn]>=valueDifference){
                return {mn,j};
            }
               if(nums[mx]-nums[j]>=valueDifference){
                return {mx,j};
            }
        }
        return {-1,-1};


        
        
    }
};