#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solution(){
    ll n;ll k;cin >> n >> k;
    while(k--){
        if(n%10==0){n/=10;}
        else{n=n-1;}
    }
    cout << n << "\n";
}
int main(){

    solution();
}