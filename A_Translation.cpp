#include<bits/stdc++.h>
using namespace std;
bool areEqual(string s,string t){
    if(s.size()!=t.size()){return false;}
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){return false;}
    }
    return true;
}
void solution(){
    string s;string t;cin >> s >> t;
    bool ans = areEqual(s,t);
    if(ans==true){cout << "YES" << "\n";}
    else{cout << "NO" << '\n';}

}
int main(){

    solution();
}