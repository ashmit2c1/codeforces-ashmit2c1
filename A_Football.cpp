#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

bool checkFunction(string s){
    ll n=s.size();ll cnt=1;ll maxCnt=LLONG_MIN;
    forloop(1,n){
        if(s[i]==s[i-1]){cnt++;maxCnt=max(maxCnt,cnt);if(maxCnt>=7){return true;}}
        else{cnt=1;}
    }
    return false;
}
void solution(){
    string s;cin >> s;
    bool ans=checkFunction(s);
    if(ans==true){print("YES")}
    else{print("NO")}

}
int main(){

    solution();
}