#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void solution(int test){
    while(test--){
        ll n;
        cin >> n;
        vector<ll>arr;
        forloop(0,n){ll x; cin >> x;arr.push_back(x);}
        unordered_map<int,int>mp;
        mp[arr[0]]++;
        bool ans = true;
        forloop(1,n){
            ll passenger = arr[i];
            if(mp[passenger+1]==1 && mp[passenger-1]==1){ans=false;break;}
            mp[passenger]=1;
        }
        if(ans==false){print("NO")}
        else{print("YES")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}