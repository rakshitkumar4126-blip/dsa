class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k){
        vector<int> ans;
        unordered_set<int> s;
        int n=nums.size();
        for(int j=0;j<n;j++){
            if(nums[j]==key){
                for(int i=0;i<n;i++){
                    if(abs(i-j)<=k){
                        s.insert(i);
                    }

                }
            }
        }
       for(int x:s){
        ans.push_back(x);
       }
        sort(ans.begin(),ans.end());
        return ans;
    }
};