class Solution {
public:
int findsum(int x){
    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
    int minSwaps(vector<int>& nums){
       int n=nums.size();
        vector<pair<int,int>> arr;
        unordered_map<int,int> index;
     
        for(int i=0;i<nums.size();i++){
            arr.push_back({findsum(nums[i]),nums[i]});
        }

        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            index[nums[i]]=i;
        }
        int swaps=0;
        vector<bool> isvisited(n,false);

        //count cycles in permutation
        for(int i=0;i<n;i++){
            if(isvisited[i] || index[arr[i].second]==i){
                continue;
            }
            int cyclesize=0;
            int j=i;
            while(!isvisited[j]){
                isvisited[j]=true;
                int value=arr[j].second;
                j=index[value];
                cyclesize++;
            }
            if(cyclesize>1){
                swaps+=cyclesize-1;
            }
        }
       
       
   return swaps;
   //need to learn this cycle count;

        
    }
};