class Solution {
public:
    int hIndex(vector<int>& citations){
        int n=citations.size();
        for(int i=0;i<n;i++){
            int curr=n-i;
            if(citations[i]>=curr){
                return curr;
            }
        }
      return 0;  
    }
};