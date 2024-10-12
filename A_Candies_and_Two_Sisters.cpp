#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
ll checkFunction(ll&n){
    if(n<3){return 0;}
    if(n==3){return 1;}
    if(n%2==0){
        ll ans = (n/2)-1;
        return ans;
    }
    else{
        return n/2;
    }
}
void solution(int test){
    while(test--){
        ll n;cin >> n;
        ll ans=checkFunction(n);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}