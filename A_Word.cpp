#include<bits/stdc++.h>
using namespace std;
void solution(){
    string s; cin >> s;int n=s.size();
    int cap=0;int sma=0;
    for(int i = 0; i<n ; i++){
        if(isupper(s[i])==true){cap++;}
        else{sma++;}
    }
    if(cap>sma){
        for(int i = 0; i<n ; i++){s[i]=toupper(s[i]);cout << s[i];}
    }
    else{
        for(int i = 0; i<n ; i++){s[i]=tolower(s[i]);cout << s[i];}
    }
}
int main(){

    solution();
}