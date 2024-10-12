#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void solution(int test){
    while(test--){
        ll n;cin >> n;ll sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        print(sum)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}