#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << "\n";

ll findMoveCount(ll x, ll y, ll k) {
    ll moves = 0;
    ll xCov = 0, yCov = 0;
    
    while (xCov < x || yCov < y) {
        if (moves % 2 == 0) {
            // Moving in the x direction
            ll moveX = min(k, x - xCov);
            xCov += moveX;
        } else {
            // Moving in the y direction
            ll moveY = min(k, y - yCov);
            yCov += moveY;
        }
        moves++;
        
        // Check if we've reached the destination to avoid unnecessary loops
        if (xCov >= x && yCov >= y) break;
    }
    
    return moves;
}

void solution(int test) {
    while (test--) {
        ll x, y, k;
        cin >> x >> y >> k;
        ll ans = findMoveCount(x, y, k);
        print(ans);
    }
}

int main() {
    int test;
    cin >> test;
    solution(test);
    return 0;
}