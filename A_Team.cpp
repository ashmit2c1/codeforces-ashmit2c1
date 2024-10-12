#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int n,int &cnt){
    for(int i=0;i<n;i++){
        vector<ll> arr;
        for(int j=0;j<3;j++){ll x;cin >> x;arr.push_back(x);}
        ll sum = 0;
        for(int j=0;j<3;j++){sum+=arr[j];}
        if(sum>=2){cnt++;}
    }
}
void solution(){
    ll n;cin >> n;int cnt = 0;
    solve(n,cnt);cout << cnt << "\n";}
int main(){solution();}