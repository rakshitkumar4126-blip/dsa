class Solution {
public:
    int dayOfYear(string date){
        int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        int year=stoi(date.substr(0,4));
        int mon=stoi(date.substr(5,2));
        int day=stoi(date.substr(8,2));
        if((year%4==0 && year%100!=0) || year%400==0){
            arr[1]=29;
        }
        int currdays=0;
        for(int i=0;i<mon-1;i++){
            currdays+=arr[i];
        }
        return currdays+day;
        
        
    }
};