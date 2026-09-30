class Solution {
public:
    int hIndex(vector<int>& citations){
        
        sort(citations.begin(),citations.end());
        for(int i=0;i<citations.size();i++){
            int citation=citations.size()-i;
            if(citations[i]>=citation){
               return citation;
            }
        }
      return 0;  
    }
};