#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

void solution(){
    vector<ll>arr;
    forloop(0,4){ll x;cin >> x;arr.push_back(x);}
    unordered_map<int,int>mp;
    forloop(0,4){mp[arr[i]]++;}
    ll cnt=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        ll freq=it->second;
        if(freq>1){cnt+=(freq-1);}
    }
    print(cnt)

}
int main(){

    solution();
}