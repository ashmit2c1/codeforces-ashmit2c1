#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(){
    ll n;cin >> n;
    vector<ll>arr(n,0);
    forloop(0,n){
        ll x;cin >> x;
        arr[x-1]=i+1;
    }
    forloop(0,n){
        cout << arr[i] << " ";
    }
}
int main(){

    solution();
}