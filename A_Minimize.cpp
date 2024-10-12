#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void solution(int test){
    while(test--){
        ll a;
        ll b;
        cin >> a >> b;
        ll ans=LLONG_MAX;
        forloop(a,b+1){
            ll eq = (i-a)+(b-i);
            ans=min(ans,eq);
        }
        print(ans);
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}