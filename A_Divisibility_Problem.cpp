#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

void solution(int test){
    while(test--){
        ll a;ll b;cin >> a >> b;
        ll quo;
        if(a%b==0){print(0)}
        else{print(b-a%b);}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}