#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(){
    ll k,init,w;
    cin >> k >> init >> w;
    ll tot=0;
    for(int i=1;i<=w;i++){
        tot+=i*k;
    }
    if(tot<=init){cout << 0 << "\n";return;}
    cout << tot-init << "\n";

}
int main(){

    solution();
}