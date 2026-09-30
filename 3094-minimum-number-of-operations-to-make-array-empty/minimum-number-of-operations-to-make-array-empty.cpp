class Solution {
public:
    int minOperations(vector<int>& nums){
        int ans=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
    
            for(auto &x:m){
                if(x.second==1){
                    ans=-1;
                    return ans;
                    }
                    
                        ans+=(x.second+2)/3;
                    
              
            }
        
        return ans;
    }
};