#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
ll solveFunction(vector<ll>&arr){
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    ll cnt=0;
    ll sum=0;forloop(0,arr.size()){sum+=arr[i];}
    ll prefixSum=0;
    forloop(0,arr.size()){
        prefixSum+=arr[i];cnt++;
        ll suffix=sum-prefixSum;
        if(prefixSum>sum-prefixSum){break;}
    }
    return cnt;
}
void solution(){
    ll n;cin >> n;
    vector<ll>arr;
    forloop(0,n){ll x;cin >> x;arr.push_back(x);}
    ll ans=solveFunction(arr);
    print(ans)

}
int main(){

    solution();
}