#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        string s; cin >> s;
        int l = s.length();for(int j=0;j<l;j++){
            if(s[j]=='+'){cnt++;break;}
            else if(s[j]=='-'){cnt--;break;}}
    }return cnt;
}
void solution(){int n;cin>>n;int ans = solve(n);cout << ans << "\n";}
int main(){solution();}