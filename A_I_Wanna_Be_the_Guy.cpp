#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

void solution(){
    ll n;cin >> n;
    ll p;cin >> p;
    unordered_set<ll>st;
    forloop(0,p){ll x;cin >> x;st.insert(x);}
    ll q;cin >> q;
    forloop(0,q){ll x;cin >> x;st.insert(x);}
    st.erase(0);
    if(st.size()==n){print("I become the guy.")}
    else{print("Oh, my keyboard!")}

}
int main(){

    solution();
}