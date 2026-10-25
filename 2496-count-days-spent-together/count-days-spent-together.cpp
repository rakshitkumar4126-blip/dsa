class Solution {
public:
int calc(string& s){
    vector<int> day={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m=stoi(s.substr(0,2));
    int d=stoi(s.substr(3,2));
    for(int i=0;i<m-1;i++){
        d+=day[i];
    }
    return d;
}
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob){
       int a=calc(arriveAlice);
       int b=calc(leaveAlice);
       int c=calc(arriveBob);
       int d=calc(leaveBob);
       return max(0,min(b,d)-max(a,c)+1);

    }
};