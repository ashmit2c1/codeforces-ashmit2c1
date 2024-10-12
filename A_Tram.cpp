// create a people in train variable that will store the answer, init with zero 
// we know that the total number of people in train is going to be people entering - people leaving 
// ans will store that variable for us and will keep on changing, ans + y ( people inside train ) - x ( people leaving )
// compare this ans to max value for people in train 
#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;cin >> n ;
    int peopleInTrain = 0;int ans = 0;
    while(n--){
        int x;int y;cin >> x >> y;
        ans = ans+y-x;
        peopleInTrain = max(peopleInTrain,ans);
    }
    cout << peopleInTrain << "\n";
}
int main(){

    solution();
}