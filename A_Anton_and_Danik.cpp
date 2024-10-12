#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(){
    ll n;cin >> n;string s;cin >> s;ll cnt=0;
    for(int i = 0; i<n ; i++){
        if(s[i]=='A'){cnt++;}
    }
    ll d = n-cnt;
    if(d>cnt){cout << "Danik" << '\n';}
    else if(cnt>d){cout << "Anton" <<" \n";}
    else{cout << "Friendship" << "\n";}
}
int main(){

    solution();
}