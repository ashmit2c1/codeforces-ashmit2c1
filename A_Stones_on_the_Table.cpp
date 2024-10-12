#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;string s;cin>>n>>s;int cnt=0;
    if(n==0){cout << 0 << "\n";return;}
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){cnt++;}
    }
    cout<<cnt<<'\n';
}
int main(){

    solution();
}