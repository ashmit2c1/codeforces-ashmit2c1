#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
/*ll solveFunction(ll n,ll k){
    vector<ll>arr;
    forloop(1,n+1){
        if(i%2==1){arr.push_back(i);}
    }
    forloop(1,n+1){
        if(i%2==0){arr.push_back(i);}
    }
    return arr[k-1];
}
void solution(){
    ll n;cin >> n;
    ll k;cin >> k;
    ll ans=solveFunction(n,k);
    print(ans)

}*/
ll solveFunction(ll n, ll k){
    ll pos = (n + 1) / 2;
    if (k <= pos) {
        ll ans = 1 + (k - 1) * 2;
        return ans;
    } else {
        ll ans = 2 + (k - pos - 1) * 2;
        return ans;
    }
}
void solution(){
    ll n;ll k;cin >> n >> k;
    ll ans=solveFunction(n,k);
    print(ans)
}
int main(){

    solution();
}
