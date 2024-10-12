#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(){
    ll n;cin >> n;ll cnt=0;
    while(n--){
        ll x;ll y;cin >> x >> y;
        if(abs(y-x)>=2){cnt++;}
    }
    print(cnt)
}
int main(){

    solution();
}