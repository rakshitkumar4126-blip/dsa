class Solution {
public:
int encrypt(int n){
    int num=INT_MIN;
    int count=0;
    while(n>0){
        num=max(num,n%10);
        n/=10;
        count++;
    }
    int ans=0;
    int p=1;
    for(int i=0;i<count;i++){

        ans+=(p*num);
        p*=10;

    }
    return ans;
}
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=encrypt(nums[i]);
        }
        return sum;
        
    }
};