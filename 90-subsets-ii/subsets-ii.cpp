class Solution {
public:
void getallsubsets(vector<int>& nums, vector<int> &ans,int i,vector<vector<int>> &result){
    if(i==nums.size()){
        result.push_back(ans);
        return;
    }
    //inclusion
    ans.push_back(nums[i]);
    getallsubsets(nums,ans,i+1,result);
    //backtrack
    ans.pop_back();
    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]){
        idx++;
    }
    //exclusion
    getallsubsets(nums,ans,idx,result);


}
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        sort(nums.begin(),nums.end());//taaki duplicate elements ek saath aaye
        vector<int> ans;
        vector<vector<int>> result;
        getallsubsets(nums,ans,0,result);
        return result;
        
    }
};