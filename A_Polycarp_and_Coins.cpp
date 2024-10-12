#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(int test){
    while(test--){
        ll n;cin >> n;
        if(n%3==0){cout << n/3 << " " << n/3<<"\n";}
        else if(n%3==1){
            cout << 1+n/3 << " " << n/3 << "\n";
        }
        else{
            cout << n/3 << " " << 1+ n/3 << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}