#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
bool checkFunction(string s){
    ll n=s.size();
    forloop(0,s.size()){
        char a=s[i];
        if(a=='H' || a=='Q' || a=='9' || a=='+'){return true;}
    }
    return false;
}
void solution(){
    string s;cin >> s;
    bool ans=checkFunction(s);
    if(ans==true){print("YES")}
    else{print("NO")}
}
int main(){

    solution();
}