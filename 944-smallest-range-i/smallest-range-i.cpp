class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        vector<int> ans;
        int minele=INT_MAX;
        int maxele=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minele){
                minele=nums[i];
            }
            if(nums[i]>maxele){
                maxele=nums[i];
            }

        }
        ans.push_back(minele);
        ans.push_back(maxele);
        int minans=INT_MAX;
        for(int i=-k;i<=k;i++){
            if((ans[1]-i-(ans[0]+k))<minans && (ans[1]-i-(ans[0]+k))>=0){
                minans=ans[1]-i-(ans[0]+k);
            }
        }
        return minans;
    }
};