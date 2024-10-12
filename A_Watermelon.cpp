#include<bits/stdc++.h>
using namespace std;
bool find(int n){
    if(n%2==0 &&  n>2){return true;}
    else{return false;}
}

int main(){int n;cin >> n;
    bool ans = find(n);
    if(ans==true){cout << "YES" <<"\n";}
    else{cout << "NO" << "\n";}
}