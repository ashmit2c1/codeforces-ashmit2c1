#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solution(){
    ll n;cin >> n;
    if(n==0){cout << 0 << "\n";return;}
    if(n<=5){cout << 1 << "\n";return;}
    if(n%5==0){cout << n/5 << '\n';}
    else{
        cout << n/5 + 1 << "\n";
    }


}
int main(){

    solution();
}