#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool luckyFunction(ll n) {
    ll cnt=0;
    while(n!=0){
        if(n%10==4 || n%10==7){cnt++;}
        n=n/10;
    }
    if(cnt==4 || cnt==7){return true;}
    return false;
}

void solution() {
    ll n;cin >> n;
    bool ans = luckyFunction(n);
    if (ans == true) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    solution();
}