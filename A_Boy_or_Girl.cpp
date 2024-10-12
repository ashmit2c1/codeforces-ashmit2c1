#include<bits/stdc++.h>
using namespace std;
void solution(){
    string s;cin>>s;set<char>st;
    for(int i = 0; i<s.size(); i++){
        st.insert(s[i]);
    }
    int n=st.size();
    if(st.size()%2==0){cout << "CHAT WITH HER!";}
    else{cout <<"IGNORE HIM!";}

}
int main(){

    solution();
}