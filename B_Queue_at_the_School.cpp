 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define for(x,y) for(int i=x;i<y;i++)
 #define secondfor(x,y) for(int j=x;j<y;j++)
 #define print(x) cout << x << "\n";
 void solution(){
    ll n;ll t;string s;cin>>n>>t>>s;
    while(t--){
        for(1,n){
            if(s[i]=='G'&& s[i-1]=='B'){
                swap(s[i],s[i-1]);i++;
            }
        }
    }
    print(s)
 }
 int main(){
 
     solution();
 }