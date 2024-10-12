#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(int test){
    while(test--){
        ll n; ll k;
        cin >> n >> k;
        vector<ll>arr;
        forloop(0,n){
            arr.push_back(k+i);
        }
        ll sum=0;
        forloop(0,n){sum+=arr[i];}
        ll prefix=0;
        ll minDiff=LLONG_MAX;
        ll index=0;
        forloop(0,n){
            prefix+=arr[i];
            ll suffix=sum-prefix;
            ll diff = abs(prefix-suffix);
            if(diff<minDiff){minDiff=diff;index=i;}
        }
        print(index+1)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}