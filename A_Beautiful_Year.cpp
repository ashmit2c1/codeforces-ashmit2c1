#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(){
    ll n;cin >> n;ll ans=0;;
    for(1000,9001){
        n++;
        string year = to_string(n);
        if(year[0]!=year[1]&&year[0]!=year[2]&&year[0]!=year[3]&&year[1]!=year[2]&&year[1]!=year[3]&&year[2]!=year[3]){
            break;
        }
    }
    print(n)
}
int main(){

    solution();
}