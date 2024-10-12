#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll findAns(vector<ll>&arr,ll h){
    ll cnt = 0; // height of people greater than 
    int n = arr.size();
    for(int i = 0; i<n ; i++){
        if(arr[i]>h){cnt+=2;}
        else{cnt++;}
    }
    return cnt;
}
void solution(){
    ll n; ll h;
    cin >> n >> h;
    vector<ll>arr;
    for(int i = 0; i<n ; i++){
        ll x;cin >> x;arr.push_back(x);
    }
    ll ans = findAns(arr,h);
    cout << ans << "\n";
}
int main(){

    solution();
}