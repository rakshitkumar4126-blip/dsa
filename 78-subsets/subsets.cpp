class Solution {
public:
   void printsubsets(vector<int> &nums,vector<int> &ans ,vector<vector<int>> &result,int i){
    if(i==nums.size()){
        
       result.push_back(ans);
        return;
    }
    //inclusion
    ans.push_back(nums[i]);
    printsubsets(nums,ans,result,i+1);

    ans.pop_back();//backtrack
    //exclusion
    printsubsets(nums,ans,result,i+1);

   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> result;
        printsubsets(nums,ans,result,0);
        return result;
        
    }
};