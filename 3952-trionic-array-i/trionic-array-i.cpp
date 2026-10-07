class Solution {
public:
bool isstrictinc(vector<int> & nums,int st,int end){
    if(st>=end) return false;
    for(int i=st;i<end;i++){
        if(!(nums[i]<nums[i+1])){
            return false;
        }
    }
    return true;
}
bool isstrictdec(vector<int> & nums,int st,int end){
    if(st>=end) return false;
    for(int i=st;i<end;i++){
        if(!(nums[i]>nums[i+1])){
            return false;
        }
    }
    return true;
}

    bool isTrionic(vector<int>& nums){
        for(int p=1;p<nums.size();p++){
            for(int q=p+1;q<nums.size();q++){
                if(isstrictinc(nums,0,p) && isstrictdec(nums,p,q) && isstrictinc(nums,q,nums.size()-1)){
                    return true;
                }



            }
        }
      return false;
        
    }
};