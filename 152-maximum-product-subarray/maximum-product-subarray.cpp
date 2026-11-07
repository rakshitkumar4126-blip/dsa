class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int a=1;
        int b=1;
        for(int i=0;i<n;i++){
            a*=nums[i];
            b*=nums[n-i-1];
            ans=max(ans,a);
            ans=max(ans,b);
            if(a==0) a=1;
            if(b==0) b=1;
        }
        return ans;
        
    }
};