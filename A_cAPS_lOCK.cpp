#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)

string solveFunction(string &s) {
    lint n = s.size();
    if (n == 1) {
        if (islower(s[0])) {
            s[0] = toupper(s[0]);
            return s;
        }
        if(isupper(s[0])==true){
            s[0]=tolower(s[0]);
            return s;
        }
        
    }
    bool firstLetterUpper = isupper(s[0]);
    bool allUpper = true;
    for (lint i = 1; i < n; ++i) {
        if (islower(s[i])) {
            allUpper = false;
            break;
        }
    }
    if (firstLetterUpper && allUpper) {
        for (lint i = 0; i < n; ++i) {
            s[i] = tolower(s[i]);
        }
        return s;
    } 
    else if (!firstLetterUpper && allUpper) {
        s[0] = toupper(s[0]);
        for (lint i = 1; i < n; ++i) {
            s[i] = tolower(s[i]);
        }
        return s;
    }

    return s;
}
void solution(){
    string s;cin >> s;
    string ans=solveFunction(s);
    print(ans)

}
int main(){

    solution();
}