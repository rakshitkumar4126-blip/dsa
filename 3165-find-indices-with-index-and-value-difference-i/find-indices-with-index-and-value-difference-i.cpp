class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int> ans(2,-1);
        int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(abs(i-j)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference){
                ans[0]=i;
                ans[1]=j;
                break;
            }

        }
    }
        
        return ans;
    }
};