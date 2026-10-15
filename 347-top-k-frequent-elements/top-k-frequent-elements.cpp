class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k){
        vector<int> ans;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>vec;
        for(auto x:m){
            vec.push_back({x.second,x.first});
        }
        sort(vec.rbegin(),vec.rend());
        for(auto x:vec){
            ans.push_back(x.second);
            k--;
            if(k==0){
                break;
            }
        }
        return ans;
    }
};