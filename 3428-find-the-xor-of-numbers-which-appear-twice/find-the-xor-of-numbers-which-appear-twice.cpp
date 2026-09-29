class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums){
        int ans=0;
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            }
            for(auto x:m){
                if(x.second==2){
                    ans^=x.first;

                }
            }
            return ans;


        
    }
};