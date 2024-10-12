#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(){
    ll n;cin >> n;
    string ans="";
    if(n==1){ans="I hate it";}
    else{
        forloop(0,n-1){
            if(i%2==0){ans+="I hate that ";}
            else{ ans+="I love that ";}
        }
        if(n%2==0){ans+="I love it";}
        else{ans+="I hate it";}
    }
    print(ans)
}
int main(){

    solution();
}