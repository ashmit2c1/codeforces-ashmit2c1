#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << "\n";

ll findMoveCount(ll x, ll y, ll k) {
    // Calculate the minimum number of moves needed to cover x distance
    ll movesX = (x + k - 1) / k;
    
    // Calculate the minimum number of moves needed to cover y distance
    ll movesY = (y + k - 1) / k;
    
    // The total number of moves required
    // We need at least max(movesX, movesY) moves to cover both dimensions.
    // Because we alternate directions, we need to ensure we have enough moves to cover the greater distance.
    return max(movesX, movesY) + (max(movesX, movesY) - 1);
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