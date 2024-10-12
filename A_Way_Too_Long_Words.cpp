#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    int n = s.size();
    if(n>10){
        string ans="";ans+=s[0];
        string count = to_string(n-2);ans+=count;
        ans+=s[n-1];return ans;}
    else{return s;}
}
void solution(int test){
    while(test--){
        string s;cin >> s;
        string ans = solve(s);cout << ans << "\n";}
}
int main(){
    int test;cin >> test;solution(test);
}