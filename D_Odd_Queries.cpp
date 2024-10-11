#include <bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x, y) for (int i = x; i < y; i++)
#define print(x) cout << x << "\n";

void createPrefix(vector<lint>& arr) {
    forloop(1, arr.size()) {
        arr[i] += arr[i - 1];
    }
}
void solution(int test) {
    while (test--) {
        lint n, q;
        cin >> n >> q;
        vector<lint> arr(n);
        lint sum = 0;
        forloop(0, n) {
            cin >> arr[i];
            sum += arr[i];
        }
        createPrefix(arr);
        while (q--) {
            lint l, r, k;
            cin >> l >> r >> k;
            lint rangeSum;
            if (l > 1) {
                rangeSum = arr[r - 1] - arr[l - 2]; 
            } else {
                rangeSum = arr[r - 1];
            }
            lint newSum = (r - l + 1) * k;
            lint finalSum = sum - rangeSum + newSum;
            if (finalSum % 2 == 0) {
                print("NO");
            } else {
                print("YES");
            }
        }
    }
}

int main() {
    int test;
    cin >> test;
    solution(test);
}