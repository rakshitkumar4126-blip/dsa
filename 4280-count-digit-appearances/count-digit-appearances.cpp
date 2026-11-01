class Solution {
public:
int cnt(int n,int digit){
    int count=0;
    while(n>0){
        if(n%10==digit){
            count++;
        }
        n/=10;
    }
    return count;
}
    int countDigitOccurrences(vector<int>& nums, int digit){
        int ans=0;
        for(int i=0;i<nums.size();i++){
                 if(nums[i]>9){
                    ans+=cnt(nums[i],digit);
                 }
                 else {
                    if(nums[i]==digit){
                        ans++;
                    }
                 }
        }
       return ans;
        
    }
};