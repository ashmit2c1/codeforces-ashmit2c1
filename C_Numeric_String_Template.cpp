#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define print(x) cout << x << "\n";

bool matchesTemplate(vector<int>& a, string s) {
    int n = a.size();
    if (s.size() != n) return false;
    unordered_map<int, char> numToChar;
    unordered_map<char, int> charToNum;
    forloop(0, n) {
        int num = a[i];
        char ch = s[i];

        if (numToChar.count(num)) {
            if (numToChar[num] != ch) return false;
        } else {
            numToChar[num] = ch;
        }

        if (charToNum.count(ch)) {
            if (charToNum[ch] != num) return false;
        } else {
            charToNum[ch] = num;
        }
    }

    return true;
}

void solution(int test) {
    while (test--) {
        int n;
        cin >> n;
        vector<int> a(n);
        forloop(0, n) {
            cin >> a[i];
        }

        int m;
        cin >> m;
        while (m--) {
            string s;
            cin >> s;
            if (matchesTemplate(a, s)) {
                print("YES");
            } else {
                print("NO");
            }
        }
    }
}

int main() {
    int test;
    cin >> test;
    solution(test);
    return 0;
}