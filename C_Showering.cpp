#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define print(x) cout << x << "\n";

void solution(int test){
    while(test--){
        ll n, s, m;
        cin >> n >> s >> m;
        ll temp = 0;
        bool ans = false;
        forloop(0, n){
            ll u, v;cin >> u >> v;
            if (u - temp >= s) {ans = true;}
            temp = v;
        }
        if (m - temp >= s){ans = true;}
        if (ans){print("YES");}else {print("NO");}
    }
}

int main() {
    int test;
    cin >> test;
    solution(test);
}