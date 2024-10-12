#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for(x) for(int i=0;i<x;i++)
#define secondfor(x) for(int j=0;j<x;j++)
void solution(){
    ll n;cin >> n;ll sum=0;
    vector<ll>arr;
    for(n){ll x;cin >> x;arr.push_back(x);}
    for(n){sum+=arr[i];}
    if(sum>=1){cout <<"HARD"<<"\n";}
    else{cout<<"EASY"<<"\n";}
}
int main(){

    solution();
}