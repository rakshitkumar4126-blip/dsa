class Solution {
public:
    int countPoints(string rings){
        int ans=0;
       int r[10]={0};
       int g[10]={0};
       int b[10]={0};
       for(int i=0;i<rings.length()-1;i++){
        if(rings[i]=='B'){
            b[rings[i+1]-'0']++;
        }
        else if(rings[i]=='G'){
            g[rings[i+1]-'0']++;

        }
        else if(rings[i]=='R'){
            r[rings[i+1]-'0']++;
        }
       }
       for(int i=0;i<10;i++){
        if(r[i]>0 && g[i]>0 && b[i]>0){
            ans++;
        }
       }
        return ans;
    }
};