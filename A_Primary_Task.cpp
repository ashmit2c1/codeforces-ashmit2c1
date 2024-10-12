#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";



void solution(int test){
    while(test--){
        ll n;
        cin >> n ;
        bool ans=true;
        if(n<100){ans=false;}
        string s = to_string(n);
        if(s[0]!='1'){ans=false;}
        if(s[1]!='0'){ans=false;}
        if(s[2]=='0' ||(s[2]=='1'&&s.size()==3)){ans=false;}
        if(ans==false){print("NO")}
        else{print("YES")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}